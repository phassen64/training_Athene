user = input("Geben Sie den Usernamen ein\n")
pw = input("Geben Sie das Passwort ein\n")

if user=="gast" and pw == "geheim":
    print("Zugang erlaubt")
else:
    print("Zugang verboten")
