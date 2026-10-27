class Circle
{
  double radius;

  double getCircumference()   //Rueckgabewert: Kreisumfang
  {
    return 2 * SomeMaths.pi * radius;
  }

  double getArea()            //Rueckgabewert: Kreisflaeche
  {
    return SomeMaths.pi * SomeMaths.getSquare(radius);
  }

}