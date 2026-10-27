using System;

namespace Auto3
{
  class Fahrzeug
  {
    internal int Geschwindigkeit;

    internal void Anzeigen()
    {
      Console.WriteLine("Geschwindigkeit: " + this.Geschwindigkeit);
    }

    internal void Stop()
    {
      Geschwindigkeit = 0;
    }

    internal void Beschleunigen(int wert)
    {
      wert = wert + this.Geschwindigkeit;
      this.Geschwindigkeit = wert;
    }
  }

  class Program
  {
    static void Main(string[] args)
    {
      Fahrzeug PKW = new Fahrzeug();

      PKW.Geschwindigkeit = 54;
      PKW.Anzeigen();
      int zahl = 17;
      Console.WriteLine("Zahl: " + zahl);

      PKW.Beschleunigen(zahl);
      PKW.Anzeigen();
      Console.WriteLine("Zahl: " + zahl);

      PKW.Beschleunigen(5);
      PKW.Anzeigen();
    }
  }
}