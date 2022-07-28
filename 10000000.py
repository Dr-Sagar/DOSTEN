


import pyttsx3
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
    speak("I am Jirvis;a intelligent machine. I was created by Mr.Reetesh;I am still under devoloping process.")

        # if  datetime.time >=6
        #  speak("Very Happy!") 
        #  else
        #  speak("Not Happy!)

if __name__ == "__main__":
        wishMe()


