class Square
{
  public static void main(String[] args)
  {

    int number = 1;

    do
    {
      System.out.printf("Das Quadrat der Zahl %d ist %d%n",
                         number, (number * number));
      number++;
    }
    while (number <= 15);
  }
}