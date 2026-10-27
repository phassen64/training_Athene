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

x = 2 #Siebzahl initialisieren
while ((x * x) <= n):
      p = 2
      while ((x * p) <= n):
          field[x * p - 1] = 0 # alle Vielfachen der Siebzahl werden auf 0 gesetzt
          p += 1
      x+=1 # Siebzahl erhöhen
print("Primzahlen bis",n,":\n")  
# Primzahlen ausgeben, entsprechende Zahlen groesser 0
i=1
while i < len(field):
    if (field[i] > 0):
        print(field[i])
    i +=1
