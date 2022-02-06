std ={
    "Dipti":{"M":48,"E":60,"H":95},
    "Shriti":{"M":75,"E":68,"H":89},
    "Subodh":{"M":45,"E":66,"H":87}
}

print(std)
tot={}
tn=" "
tm=0
for Dipti,info in std.items():
    total=0
for M,marks in info.items():
    total=total+marks
avg = int(total/3)

std [Dipti]={'total':total,'Average'}

if avg >tm:
    tn = name
    tm = avg




# print (std[input([input()])])