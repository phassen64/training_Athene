class TestEvaluation
{
  public static void main(String[] args)
  {
    int result;
    result = Integer.parseInt(args[0]);

    if (result <= 10 && result >= 0)
    {
      switch(result)
      {
        case 10: System.out.println("Ergebnis: sehr gut"); break;
        case 9:  System.out.println("Ergebnis: gut"); break;
        case 8:  System.out.println("Ergebnis: befriedigend"); break;
        case 7:  System.out.println("Ergebnis: ausreichend"); break;
        default: System.out.println("Ergebnis: Leider nicht genuegend Punkte erreicht");
      }
    }
    else
    {
      System.out.println("FEHLER: Ungueltige Punktzahl");
    }
  }
}