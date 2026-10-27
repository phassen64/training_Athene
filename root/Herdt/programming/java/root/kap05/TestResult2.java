class TestResult2
{
  public static void main(String[] args)
  {
    int result;
    result = Integer.parseInt(args[0]);

    if (result <= 10 && result >= 0)
    {
      if (result >= 7)
      {
        System.out.println("Der Test ist bestanden!");
      }
      else
      {
        System.out.println("Der Test ist leider nicht bestanden!");
      }
    }
    else
    {
      System.out.println("FEHLER: Ungueltige Punktzahl");
    }
  }
}