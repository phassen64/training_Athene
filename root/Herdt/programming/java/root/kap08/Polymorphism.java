class Polymorphism
{
  public static void main(String args[])
  {
    Rectangle oneForm = new Rectangle(3, 5);
    Rectangle secondForm = new Cuboid(3, 5, 4);
    Rectangle thirdForm = new Pyramid(3, 5, 4);

    System.out.printf("Objektoberfläche %n(%d x %d): %d%n%n",
                      oneForm.getWidth(),oneForm.getLength(),
                      oneForm.getArea());
    System.out.printf("Objektoberfläche %n(%d x %d): %d%n%n",
                      secondForm.getWidth(),
                      secondForm.getLength(),
                      secondForm.getArea());
    System.out.printf("Objektoberfläche %n(%d x %d): %d%n%n",
                      thirdForm.getWidth(),
                      thirdForm.getLength(),
                      thirdForm.getArea());
  }
}
