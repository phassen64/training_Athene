warenkorb = []
while True:
    produkt = input("Geben Sie das Produkt ein\n")
    warenkorb.append(produkt)
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
        
        
    
