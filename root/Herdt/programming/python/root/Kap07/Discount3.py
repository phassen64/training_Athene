price = 1497.56
if price > 1000:
    price =  price - price * 0.03
elif price < 5000:
    price = price - price * 0.05
else: 
    price = price - price * 0.08
    
print("Berechneter Discount-Preis: " , price)
