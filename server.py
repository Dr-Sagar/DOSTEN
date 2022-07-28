from operator import index
from flask import Flask,render_template
app = Flask(__name__)

@app.route('/')
def hello_world():
    name = "DOSTEN"
    return render_template('index.html',name34 = name)

@app.route('/about')
def about():
    return render_template('about.html')



if __name__ == '__main__':
    app.run(debug=True)