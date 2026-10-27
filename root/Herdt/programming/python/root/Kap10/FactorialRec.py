def compFact(x):
    if (x > 0):
        return x * compFact(x-1);
    else:
     return 1;
print(compFact(4))
