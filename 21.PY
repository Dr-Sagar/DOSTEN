from flask import Flask
app = Flask(__name__)


def red():
    # return ("Janam Janam Janam, saath chalna yuhi hi! \n Bekhayali main bhi tera ki khayal aaye!")
    return ("90")

@app.route('/')
def hello_world():
    return red()

if __name__ == '__main__':
    app.run(debug=True)