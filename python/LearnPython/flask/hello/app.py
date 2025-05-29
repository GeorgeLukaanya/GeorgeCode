from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/")
##Longer implementation
# def index():
#     if "name" in request.args:
#         name = request.args["name"]
#     else:
#         name = "world"
#     return render_template("index.html", placeholder=name)

#Short-hand implementation
def index():
    name = request.args.get("name", "world")
    return render_template("index.html", placeholder=name)

if __name__ == "__main__":
    app.run(debug=True)

