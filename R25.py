# Dictionaries

"""
kol = {
    "brand":"Ford",
    "model":"Mustang",
    "year":1964
}

print(len(kol["brand"]))
print(len(kol))



"""


thisdict = {
  "brand": "Ford",
  "electric": False,
  "year": 1964,
  "colors": ["red", "white", "blue"]
}

print(thisdict[input()])



# Dictionary Access time

thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
# x = thisdict["model"]
# x = thisdict.get("model")
x = thisdict.keys()
x = thisdict.values()

print(x)



# changer in length

car = {
"brand": "Ford",
"model": "Mustang",
"year": 1964
}

x = car.keys()
x = car.values()

print(x) #before the change

car["color"] = "white"

print(x) #after the change





