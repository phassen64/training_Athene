using System;

namespace Auto5
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

    internal void Beschleunigen(ref int wert)
    {
      wert = wert + this.Geschwindigkeit;
      this.Geschwindigkeit = wert;
    }

    internal double Tanken(double menge, int gefahreneKilometer)
    {
      double literPro100km = menge * 100 / gefahreneKilometer;
      return literPro100km;
    }
  }

  class Program
  {
    static void Main(string[] args)
    {
      Fahrzeug PKW = new Fahrzeug();
      /*
      PKW.Geschwindigkeit = 54;
      PKW.Anzeigen();
      int zahl = 17;
      Console.WriteLine("Zahl: " + zahl);
      PKW.Beschleunigen(ref zahl);
      PKW.Anzeigen();
      Console.WriteLine("Zahl: " + zahl);
      PKW.Anzeigen();
       */
      double verbrauch;
      verbrauch = PKW.Tanken(43, 689);
      Console.WriteLine("Verbrauch: {0:f} Liter pro 100 km", verbrauch);
    }
  }
}