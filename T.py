import webbrowser
d={"Tuple":("https://www.w3schools.com/python/python_tuples.asp"),
"Dictionary":"Python dictionary is an unordered collection of items. In a dictionary  items are placed inside curly braces {} separated by commas.",
"List" :("https://www.tutorialgateway.org/python-list-functions/")
,"YT":("https://www.youtube.com/")
,"cma":("https://riteshcoder07.blogspot.com/")
,"TIT":("https://titagartala.ac.in/")
,"w3p":("https://www.w3schools.com/python/default.asp")
,"w3pml":("https://www.w3schools.com/python/python_ml_getting_started.asp")



}



d["pot"] = "https://www.linkedin.com/?trk=msn-top-in"

d["120"] = "https://www.linkedin.com/?trk=msn-top-in"

# del d["CMA"]

print(webbrowser.open(d[input()]))
# for x in d:
    # print(x)
# print(d[input()])