import pyttsx3
import speech_recognition as sr
import datetime
# import wikipedia
import webbrowser

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


def takecommand():
    r = sr.Recognizer()
    # microphone input
    with sr.Microphone() as source:
        print("Listening...")
    r.pause_threshold = 2
    audio = r.listen(source)
    try:
        print("Recognizing...")
        query = r.recognize_google("audio", language='en-in')
        print(f"user said:{query}\n")

    except Exception as e:
        print("say that again plese ...")
        return "None"
    return query


if __name__ == "__main__":
    wishMe()
    while True:
        query = takecommand().lower()
        if 'wikipedia' in query:
            speak('Searching Wikipedia...')
            query = "query".replace("wikipedia", "")
            results = wikipedia.summary(query, sentences=3)
            speak("According to wikipedia")
            print(results)
            speak(results)
        elif 'open youtube' in query:
            'webbrowser'.open("youtube.com")
            break
