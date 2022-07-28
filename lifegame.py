#!/usr/bin/python
# *- coding: utf-8 -*-

import mido
import time
import random

NUM_X = 8
NUM_Y = 8

RED = 15
AMBER = 63
GREEN = 60
GREEN_ROW = 28
YELLOW = 62

# COND = [[1, 1],[2, 1],[3, 1],[5, 1],[1, 2],[4, 3],[5, 3],[2, 4],[3, 4],[5, 4],[1, 5],[3, 5],[5, 5]]
note_list = [84, 86, 88, 89, 91, 93, 95, 96]

def calcNote(x, y):
    return (16 * y) + x

def sendNoteOn(outport, in_note, vel):
    outport.send(mido.Message('note_on', note = in_note, velocity = vel))

def sendNoteOff(outport, in_note, vel):
    outport.send(mido.Message('note_off', note = in_note, velocity = vel))

def sendCondChg(outport, cont, val):
    outport.send(mido.Message('control_change', control = cont, value = val))

def setUpDevice(device_string):
    mido.set_backend('mido.backends.rtmidi')
    try:
        outport = mido.open_output(device_string)
        return outport

    except IOError:
        print device_string + ' is not connected...'
        raise

class Cell:
    def __init__(self, x, y, note):
        self.neighbors = []
        self.x = x
        self.y = y
        self.note = note
        if(random.random() * 2 > 1):
            self.nextState = True
        else:
            self.nextState = False
        self.state = self.nextState

    def addNeighbor(self, cell):
        self.neighbors.append(cell)

    def calcNextState(self):
        self.liveCount = 0
        for cell in self.neighbors:
            if cell.state:
                self.liveCount = self.liveCount + 1
        if self.state:
            if self.liveCount == 2 or self.liveCount == 3:
                self.nextState = True
            else:
                self.nextState = False
        else:
            if self.liveCount == 3:
                self.nextState = True
            else:
                self.nextState = False

    def drawMe(self, outport):
        self.state = self.nextState
        if(self.state):
            sendNoteOn(outport, calcNote(self.x, self.y),
                       random.choice([RED, YELLOW, AMBER, GREEN]))

    def getState(self):
        return self.state

class CellArr:
    def __init__(self, x, y):
        self.cell_arr = []
        self.max_x = x
        self.max_y = y

    def setupCells(self, x, y):
        self.cell_arr = [[Cell(x, y, note_list[y]) for y in range(self.max_y)] for x in range(self.max_x)]

        for x in range(self.max_x):
            for y in range(self.max_y):
                above = y - 1
                below = y + 1
                left = x - 1
                right = x + 1

                if above < 0:
                    above = self.max_y - 1
                if below == self.max_y:
                    below = 0
                if left < 0:
                    left = self.max_x - 1
                if right == self.max_x:
                    right = 0

                self.cell_arr[x][y].addNeighbor(self.cell_arr[left][above])
                self.cell_arr[x][y].addNeighbor(self.cell_arr[left][y])
                self.cell_arr[x][y].addNeighbor(self.cell_arr[left][below])
                self.cell_arr[x][y].addNeighbor(self.cell_arr[x][below])
                self.cell_arr[x][y].addNeighbor(self.cell_arr[right][below])
                self.cell_arr[x][y].addNeighbor(self.cell_arr[right][y])
                self.cell_arr[x][y].addNeighbor(self.cell_arr[right][above])
                self.cell_arr[x][y].addNeighbor(self.cell_arr[x][above])

    def drawCells(self, outport):
        for x in range(self.max_x):
            for y in range(self.max_y):
                self.cell_arr[x][y].drawMe(outport)

    def drawVertline(self, outport, x):
        for cell in self.cell_arr[x]:
            if not cell.state:
                sendNoteOn(outport, calcNote(cell.x, cell.y), GREEN_ROW)

    def playVertline(self, outport, x):
        for cell in self.cell_arr[x]:
            if cell.state:
                print "cell.note : " + str(cell.note)
                sendNoteOn(outport, cell.note, 30)

    def stopVertline(self, outport, x):
        for cell in self.cell_arr[x]:
            if cell.state:
                sendNoteOff(outport, cell.note, 100)

# %%%%%%%%%%%%%%%%%%%%%%%
    def calcCells(self):
        for x in range(self.max_x):
            for y in range(self.max_y):
                self.cell_arr[x][y].calcNextState()


    def chkCells(self):
        if True in [flatten.state for inner in self.cell_arr for flatten in inner]:
            return True
        else:
            return False


    def clearCells(self):
        self.cell_arr = []

def setup(cells):
    cells.clearCells()
    cells.setupCells(NUM_X, NUM_Y)


if __name__ == '__main__':
    try:
        lp = setUpDevice("Launchpad")
        iac = setUpDevice("IACBUS")
    except IOError:
        exit()

    cells = CellArr(NUM_X, NUM_Y)
    setup(cells)
    while True:
        try:
            for x in range(NUM_X):
                cells.stopVertline(iac, x)
                cells.calcCells()
                sendCondChg(lp, 0, 0)
                cells.drawCells(lp)
                cells.drawVertline(lp, x)
                cells.playVertline(iac, x)
                if(not cells.chkCells()):
                    setup(cells)

                time.sleep(0.3)

        except KeyboardInterrupt:
            cells.stopVertline(iac, x)
            sendCondChg(lp, 0, 0)
            exit()