# Richtige Variablendeklarationen
number = 0 # deklariert eine Variable number vom Typ int
print(type(number), number, sep=",")
price = 0.0 # deklariert eine Variable price vom Typ float
print(type(price), price, sep=",")
size = 0e0 # deklariert eine Variable size vom Typ float
print(type(size), size, sep=",")
name = "" #  deklariert eine Variable name vom Typ str
print(type(name), name, sep=",")
inumber = 0 + 0j #  deklariert eine Variable inumber vom Typ complex
print(type(inumber), inumber, sep=",")
wahr = True #  deklariert eine Variable wahr vom Typ bool
print(type(wahr), wahr, sep=",")


# Fehlerhafte Variablendeklarationen - auskommentiert 
'''
&count = 42 # Bezeichner von Variablen dürfen kein & enthalten
1number = 42 # Bezeichner von Variablen dürfen nicht mit einer Zahl beginnen
as = 1 # Bezeichner dürfen nicht mit Schlüsselwörtern übereinstimmen
'''
