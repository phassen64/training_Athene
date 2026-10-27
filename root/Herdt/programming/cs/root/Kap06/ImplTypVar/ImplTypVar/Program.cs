using System;

namespace ImplTypVar
{
  class Program
  {
    static void Main(string[] args)
    {
      var nummer = 123;
	  
      // vom Compiler ermittelten Typ ausgeben
      Console.WriteLine(nummer.GetType().ToString());

      for (var zaehler = 1; zaehler < 5; zaehler++)
        Console.WriteLine(zaehler);
    }
  }
}