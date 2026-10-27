zugangsliste =
(("hans","geheim"),("otto","passwort"),("fred","feuerstein"))
i=0
def zugang():
    global i
    global zugangsliste
    while i< 3:
        user = input("User:\n")
        pw = input("Passwort:\n")

        vorhanden = False

        p = (user,pw)
        for v in zugangsliste:
            if v == p:
                vorhanden = True
        i+=1
        if vorhanden :
            print("Vorhanden")
            break
        else:
            print("Falsch")
            
            if i > 2:
                print("Nach", i,
                      "falschen Versuchen wird der Account gesperrt")
                break
            if input("Vorgang abbrechen (J)")=="J":
                print("Vorgang wird abgebrochen")
                break
    
zugang()
