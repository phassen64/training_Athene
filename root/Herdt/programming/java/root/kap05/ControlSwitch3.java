class ControlSwitch3
{
  public static void main(String[] args)
  {
    int number = 0;
    number = Integer.parseInt(args[0]);
    if (number >= 0)
    {	//Zahl einlesen
      char result = switch(number){
        case 0 -> {yield 'a';}
        case 1, 2 -> {yield 'b';}
        case 3, 4, 5 -> {
          System.out.println("Wert zwischen 3 und 5.");
          yield 'c';
      }
        default -> { yield 'd';}
      };
      System.out.println(result);
    }
  }
}
