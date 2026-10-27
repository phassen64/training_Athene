def returnMax(a, b):
    if (a > b):
        return a
    else: 
      return b
n1 = 1234;
n2 = 5678;
max = 0;
def main():
    max = returnMax(n1, n2)
    print("Maximum: ", max);
main()
