class CircleExcercise
{
  public static void main(String[] args)
  {
    Circle firstCircle = new Circle();
    Circle secondCircle = new Circle();
    Circle thirdCircle = new Circle();

    firstCircle.radius = 3;
    secondCircle.radius = 8;
    thirdCircle.radius = 5;

    System.out.printf("1. Kreis:%nRadius: %g%nUmfang: %g%nFlaeche: %g%n",
                      firstCircle.radius,
                      firstCircle.getCircumference(),
                      firstCircle.getArea());
    System.out.println();
    System.out.printf("2. Kreis:%nRadius: %g%nUmfang: %g%nFlaeche: %g%n",
                      secondCircle.radius,
                      secondCircle.getCircumference(),
                      secondCircle.getArea());
    System.out.println();
    System.out.printf("3. Kreis:%nRadius: %g%nUmfang: %g%nFlaeche: %g%n",
                      thirdCircle.radius,
                      thirdCircle.getCircumference(),
                      thirdCircle.getArea());
  }
}