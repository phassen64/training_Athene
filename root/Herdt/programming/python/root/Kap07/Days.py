# Alle Sonntage eines Jahres, die auf den Monatsersten fallen
letzterTag = int(input("Geben Sie den letzten Tag des Vorjahres ein.\n"))  # letzter Tag des Vorjahres
monat = 1   # 1 ... 12 gleich Januar ... Dezember
monatstage = 1 
schaltjahr = int(input("Schaltjahr?\n"))   # 1 entspricht Schaltjahr, 0 sonst
print("Monate, die mit einem Sonntag beginnen:") 
while (monat <= 12): # alle Monate durchlaufen
    if monat == 2:
        monatstage = 28 + schaltjahr 
    elif monat == 4 or monat == 6 or monat == 9 or monat == 11: 
        monatstage = 30
    else: 
        monatstage = 31
    tag = 1  # 1 ...7 gleich Montag ... Sonntag
    while (tag <= monatstage): # alle Tage des Monats durchlaufen
        letzterTag = int(letzterTag % 7) + 1
        if (tag == 1 and letzterTag == 7):
            print("Der" , tag , ". im Monat" , monat , "ist ein Sonntag.") 
        tag += 1 # Counter der inneren Schleife erhöhen
    monat += 1 # Counter der äußeren Schleife erhöhen
