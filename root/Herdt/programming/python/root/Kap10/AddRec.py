def addRec(a, b):
   if (a > 1):
     return (addRec(a - 1, b) + b)
   else:
     return b
a = int(input("Bitte 1. ganze Zahl eingeben!\n"))
b = int(input("Bitte 2. ganze Zahl eingeben!\n"))
result = addRec(a, b)
print("Produkt von ", a, " und ", b, " ist ",result)
