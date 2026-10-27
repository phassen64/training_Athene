def addIter( a, b):
    result = b
    if ((a != 0) and (b != 0)):
        i = 2
        while i <= a:
            result = result + b
            i += 1
    else:
        result = 0
    return result
a = int(input("Bitte 1. ganze Zahl eingeben!\n"))
b = int(input("Bitte 2. ganze Zahl eingeben!\n"))
result = addIter(a, b)
print("Produkt von ", a, " und ", b, " ist ",result)
