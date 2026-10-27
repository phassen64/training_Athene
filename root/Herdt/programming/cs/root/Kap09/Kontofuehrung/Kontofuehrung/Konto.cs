using System;

namespace Kontofuehrung
{
  class Konto
  {
    private double stand;
    public double Kontostand
    {
      get { return this.stand; }
      set { this.stand = value; }
    }

    public Konto(double stand)
    {
      this.stand = stand;
    }
  }
}