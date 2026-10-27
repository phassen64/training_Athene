using System;

namespace Auto
{
  class Fahrzeug
  {
    internal int Geschwindigkeit;
  }

  class Program
  {
    static void Main(string[] args)
    {
      Fahrzeug PKW = new Fahrzeug();
      PKW.Geschwindigkeit = 54;

      Fahrzeug fahrrad = new Fahrzeug();
      fahrrad.Geschwindigkeit = 18;

      Console.WriteLine("Geschwindigkeit: {0} km/h", PKW.Geschwindigkeit);
      Console.WriteLine("Geschwindigkeit: {0} km/h", fahrrad.Geschwindigkeit);
    }
  }
}