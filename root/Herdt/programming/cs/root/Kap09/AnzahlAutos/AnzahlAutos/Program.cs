using System;

namespace AnzahlAutos
{
  public class Fahrzeug
  {
    private static int anzahlFahrzeuge = 0;
    private int aktuelleGeschwindigkeit;

    public static int Anzahl
    {
      get { return Fahrzeug.anzahlFahrzeuge; }
    }

    public int Geschwindigkeit
    {
      get { return this.aktuelleGeschwindigkeit; }
      set
      {
        if (value > 200)
          value = 200;
        aktuelleGeschwindigkeit = value;
      }
    }

    public Fahrzeug(int value)
    {
      Fahrzeug.anzahlFahrzeuge++;
      this.Geschwindigkeit = value;
    }

    public Fahrzeug() : this(30)
    { }
  }

  class Program
  {
    static void Main(string[] args)
    {
      Console.WriteLine("Anzahl der Fahrzeuge: " + Fahrzeug.Anzahl);
      
      Fahrzeug PKW1 = new Fahrzeug(45);
      Console.WriteLine("Anzahl der Fahrzeuge: " + Fahrzeug.Anzahl);
      
      Fahrzeug PKW2 = new Fahrzeug(38);
      Console.WriteLine("Anzahl der Fahrzeuge: " + Fahrzeug.Anzahl);
      
      Fahrzeug PKW3 = new Fahrzeug(78);
      Console.WriteLine("Anzahl der Fahrzeuge: " + Fahrzeug.Anzahl);

      Console.WriteLine("Fahrzeug 1: {0} km/h", PKW1.Geschwindigkeit);
      Console.WriteLine("Fahrzeug 2: {0} km/h", PKW2.Geschwindigkeit);
      Console.WriteLine("Fahrzeug 3: {0} km/h", PKW3.Geschwindigkeit);
    }
  }
}