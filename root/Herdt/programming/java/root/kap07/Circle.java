class Circle
{
//Attribute
  private double radius;
  private boolean filled;

//Getter und Setter-Methoden
    double getRadius()
    {
    return radius;
  }

  void setRadius(double radius)
  {
    this.radius = radius;
  }

    boolean isFilled()
    {
    return filled;
  }

  void setFilled(boolean filled)
  {
    this.filled = filled;
  }


//Konstruktoren
  Circle()
  {
    this(1,false);
  }

  Circle(double radius)
  {
    this(radius, false);
  }

  Circle(double radius, boolean filled)
  {
    setRadius(radius);
    setFilled(filled);
  }

//Methoden
  double getCircumference()
  {
    return 2 * SomeMaths.pi * getRadius();
  }

  double getArea()
  {
    // Bei der folgenden if-Struktur enthält jeder Block nur eine einzige Anweisung.
    // Daher können die geschweiften Klammern entfallen.

    if (isFilled())
        return SomeMaths.pi * SomeMaths.getSquare(getRadius());
    else
        return 0;
  }

}