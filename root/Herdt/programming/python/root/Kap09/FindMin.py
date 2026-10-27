def returnMin (x, y, z):
    if ((x < y) and (x < z)):
        return x
    elif ((y < x) and (y < z)):
        return y
    else:
        return z
a = int(input("Bitte 1. ganze Zahl eingeben!\n"))
b = int(input("Bitte 2. ganze Zahl eingeben!\n"))
c = int(input("Bitte 3. ganze Zahl eingeben!\n"))
min = returnMin (a, b, c)
print("Minimum:",min)
