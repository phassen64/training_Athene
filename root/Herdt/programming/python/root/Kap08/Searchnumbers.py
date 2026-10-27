# Sucht in einem vorgegebenen Tupel nach der eingegebenen Zahl
zahl = input("Geben Sie die zu suchende Zahl ein:\n")
numbers = (0, 10, 12, 4, 7, 20, 21, 13)
position = len(numbers)-1

while position >= 0:
    if numbers[position] == int(zahl):
        print("Die Zahl", numbers[position] ,"ist an Position", position, " vorhanden.")
        break
    position -= 1
    if position == -1:
        print("Zahl", numbers[position] ,"nicht vorhanden.")
        
