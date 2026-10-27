n = int(input("Bitte ganze Zahl eingeben!\n"))
field = []
#Feld mit Zahlen von 1 bis n initialisieren
i = 0
while i < n:
      field.append(i + 1)
      i+=1
print("Ursprungsfeld:\n")      
print(field)
print("----------------\n")

def moveRight(field):
    temp = field[len(field) - 1]
    i = len(field) - 1
    while i >= 1:
      field[i] = field[i - 1]
      i-=1

    field[0] = temp;
moveRight(field)
print("Neues Feld:\n")      
print(field)
print("----------------\n")
