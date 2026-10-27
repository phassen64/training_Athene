# Variablendeklarationen
i = 0 # Datentyp int
j = 0.0 # Datentyp float
k = 0 + 0j # Datentyp complex
l = 'a' # Datentyp str
m = False # Datentyp bool

# Testausgaben der Datentypen und Werte
print("i", type(i), i, sep=": ")
print("j", type(j), j, sep=": ")
print("k", type(k), k, sep=": ")
print("l", type(l), l, sep=": ")
print("m", type(m), m, sep=": ")

# Variablenumwandlungen
i = j # float zu int-Variable
print("i", type(i), i, sep=": ")

k = j # float zu complex-Variable
print("k", type(k), k, sep=": ")

l = m # bool zu str-Variable
print("l", type(l), l, sep=": ")
