price = 1497.56
if price > 1000:
    price =  price * (1 - 0.03)
else:
    price = price - price * 0.05
    
print("Berechneter Discount-Preis: " , price)
