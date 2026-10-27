class PlusTwice
{
  public static void main(String[] args)
  {
    int number = 1;
    do
    {
      System.out.println(number);
      number = number + number * 2;
    }
    while (number <100);
    System.out.println(number);
  }
}
