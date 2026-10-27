using System;

namespace Zahlen5
{
  class Zahl1
  {
    protected int Wert;

    internal virtual void Ausgabe()
    {
      Console.WriteLine(Wert);
    }
  }

  class Zahl2 : Zahl1
  {
    new protected string Wert;

    public Zahl2(int i, string s)
    {
      base.Wert = i;
      Wert = s;
    }

    internal override void Ausgabe()
    {
      base.Ausgabe();

      Console.WriteLine(Wert);
    }
  }

  class Program
  {
    static void Main(string[] args)
    {
      Zahl1 eineZahl;

      eineZahl = new Zahl1();
      eineZahl.Ausgabe();

      eineZahl = new Zahl2(10, "Zehn");
      eineZahl.Ausgabe();
    }
  }
}