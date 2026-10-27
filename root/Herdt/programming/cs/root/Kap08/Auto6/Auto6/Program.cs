using System;

namespace Auto6
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
      this.Geschwindigkeit += wert;
    }

    internal void Beschleunigen(double faktor)
    {
      double value = this.Geschwindigkeit * faktor;
      this.Geschwindigkeit = Convert.ToInt32(value);
    }
  }

  class Program
  {
    static void Main(string[] args)
    {
      Fahrzeug PKW = new Fahrzeug();
      PKW.Geschwindigkeit = 54;
      PKW.Anzeigen();
      PKW.Beschleunigen(17);
      PKW.Anzeigen();
      PKW.Beschleunigen(1.7);
      PKW.Anzeigen();
    }
  }
}