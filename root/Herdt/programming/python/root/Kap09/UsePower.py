def computePower(basis, exponent):
    result = 1
    i = 1
    while i <= exponent:
        result = result * basis
        i+=1
    
    return result

x = int(input("Bitte Basis als ganze Zahl eingeben!\n"))
n = int(input("Bitte Exponent ganze Zahl eingeben!\n"))

y = computePower(x, n);
print("Die ", str(n),".te Potenz von ", str(x), "betraegt ", str(y))
