using System;

namespace Datumsformate2
{
  abstract class Datum
  {
    protected DateTime DatumsWert;

    abstract public void Ausgabe();
  }

  class DatumsForm1 : Datum
  {
    public override void Ausgabe()
    {
      DatumsWert = DateTime.Now;
      Console.WriteLine(DatumsWert.ToLongDateString());
    }
  }

  class DatumsForm2 : Datum
  {
    public override void Ausgabe()
    {
      DatumsWert = DateTime.Now;
      Console.WriteLine(DatumsWert.ToShortDateString());
    }
  }

  class DatumsForm3 : Datum
  {
    public override void Ausgabe()
    {
      DatumsWert = DateTime.Now;
      Console.WriteLine(DatumsWert.ToOADate());
    }
  }

  class Program
  {
    static void Main(string[] args)
    {
      Datum einDatum;
    
      einDatum = new DatumsForm1();
      einDatum.Ausgabe();
      
      einDatum = new DatumsForm2();
      einDatum.Ausgabe();
      
      einDatum = new DatumsForm3();
      einDatum.Ausgabe();
    }
  }
}