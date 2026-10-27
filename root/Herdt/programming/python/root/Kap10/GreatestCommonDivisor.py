def greatestCommonDivisor(a, b):
    remainder = 1 #Rest
    g = 0 # groessere Zahl
    l = 0 #kleinere Zahl
    if (a > b):
        g = a
        l = b
    else:
        g = b
        l = a
    remainder = g % l

    if (remainder > 0):
        while (remainder > 0):
            g = l
            l = remainder
            remainder = g % l
    remainder = l
    return remainder

x = int(input("Bitte 1. ganze Zahl eingeben!\n"))
y = int(input("Bitte 2. ganze Zahl eingeben!\n"))
result = greatestCommonDivisor(x, y) # ggT berechnen
print("Der groesste gemeinsame Teiler von ", x, " und ", y, " ist ",result)

