using System;

namespace ControlWhile
{
  class Program
  {
    static void Main(string[] args)
    {
      int counter = 1;

      while (counter < 10)
      {
        Console.WriteLine(counter);
        counter += 2;
      }
    }
  }
}