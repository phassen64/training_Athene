def compFact(x):
    result = 1
    while (x > 1):
        result = result * x
        x = x - 1
    return result
print(compFact(4))
