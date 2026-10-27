number = int(input("Zahl\n"));
counter = 0;
while number % 5 != 0:
    number = int(number / 5) 
    print(number)
    counter = counter + 1
print("Ergebnis: ", counter)
