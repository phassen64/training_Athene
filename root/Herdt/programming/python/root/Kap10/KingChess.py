def takeChess(i, a):
   if (a > 1):
      i = i * 2 # Anzahl der Koerner werden fur das naechste Feld verdoppelt
      return (i + takeChess(i, a - 1)) # Anzahl der Weizenkoerner werden rekursiv berechnet
   else:
     return 1
  

x = 63 # Anzahl der Schachfelder
result = takeChess(1, x)# Berechnung der Weizenkoerner, Startwert 1 Weizenkorn
print("Die Anzahl der Weizenkoerner fuer",x,"Feld/er betraegt ",result)
