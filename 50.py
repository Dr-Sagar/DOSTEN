import pyttsx3
import cv2
import datetime

engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
# print(voices[0].id)
engine.setProperty(voices, voices[0].id)

def speak(audio):
    engine.say(audio)
    engine.runAndWait()

def wishMe():
    hour = int(datetime.datetime.now().hour)
    if hour >= 0 and hour <= 12:
        speak("Good Morning!")
    elif hour >= 12 and hour <= 18:
        speak("Good Afternoon!")
    else:
        speak("Good Night!")
    speak("I am jirvis,Sir")
    speak("I am Jirvis;a intelligent machine.  I was created by Mr.Reetesh;I am still under devoloping process.")
    speak( "The time is almost to take your medicine")
        # if  datetime.time >=6
        #  speak("Very Happy!") 
        #  else
        #  speak("Not Happy!)

if __name__ == "__main__":
        wishMe()



# Load the cascade
face_cascade = cv2.CascadeClassifier('ty.xml')

# Read the input image
img = cv2.imread('pyro3.png')
# img = cv2.imread('pyro1.png')

# Convert into grayscale
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

# Detect faces
faces = face_cascade.detectMultiScale(gray, 1.1, 4)

# Draw rectangle around the faces
for (x, y, w, h) in faces:
    cv2.rectangle(img, (x, y), (x + w, y + h), (255, 0, 0), 2)

# Display the output
cv2.imshow('img',img)
cv2.imshow('txt',img)
cv2.waitKey()