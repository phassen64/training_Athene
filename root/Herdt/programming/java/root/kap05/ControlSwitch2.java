class ControlSwitch2
{
  public static void main(String[] args)
  {
    int number = 0;
    number = Integer.parseInt(args[0]);
    if (number >= 0)
    {	//Zahl einlesen
      char result = switch(number){
        case 0: yield 'a';
        case 1, 2: yield 'b';
        case 3, 4, 5: {
          // innerhalb einer case-Anweisung  kann ein Block stehen
          System.out.println("Wert zwischen 3 und 5.");
          yield 'c';
      }
        default: yield 'd';
      };
      System.out.println(result);
      // alternative Syntax
      char result2 = switch(number){
        case 0 -> 'A';
        case 1, 2 -> 'B';
        default -> 'C';
      };
      System.out.println(result2);
    }
  }
}
