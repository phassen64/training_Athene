using System;

namespace Auto2
{
  class Fahrzeug
  {
    internal int Geschwindigkeit;

    internal void Anzeigen()
    {
      Console.WriteLine("Geschwindigkeit: " + this.Geschwindigkeit);
    }

   
  }

  class Program
  {
    static void Main(string[] args)
    {
      Fahrzeug PKW = new Fahrzeug();
 
      PKW.Geschwindigkeit = 54;
      
      Fahrzeug fahrrad = new Fahrzeug();
      
      fahrrad.Geschwindigkeit = 18;
      PKW.Anzeigen();
      fahrrad.Anzeigen();
      PKW.Stop();
      PKW.Anzeigen();
    }
  }
}