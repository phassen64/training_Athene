var1 = 'c'
var2 = 'a'
hilfsvariable = 'a'  
    
    # Variablen vor dem Tauschen ausgeben
print("Vor dem Tausch: " , "var1 = " , var1 , "  var2 = " , var2)
    
    # Wert der ersten Variablen muss in einer Hilfsvariablen gemerkt werden
hilfsvariable = var1
var1 = var2
var2 = hilfsvariable
    
    # Variablen nach dem Tauschen ausgeben
print("Nach dem Tausch: " , "var1 = " , var1 , "  var2 = " , var2)
