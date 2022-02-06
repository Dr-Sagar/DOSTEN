prices ={
    "Bottles":30,"Tiffin":100,"Bag":400
}

stock = {"Bottles":100,"Tiffin":50,"Bag":50}

total = 0
for U in prices:
    value = prices[U]*stock[U]
    print(U)
    total = total+1