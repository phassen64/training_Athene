warenkorb = {}
while True:
    produkt = input("Geben Sie das Produkt ein\n")
    menge = input("Geben Sie die Menge ein\n")
    warenkorb.update({produkt:menge})
    schritt = input("w(eiter einkaufen), b(estellen), a(bbruch)\n")
    if schritt == "a":
        warenkorb.clear()
        print("Bestellvorgang abgebrochen")
        break
    elif schritt == "b":
        print("Bestellung", warenkorb)
        break
    else:
        print("Neues Produkt wählen")
        
        
    
