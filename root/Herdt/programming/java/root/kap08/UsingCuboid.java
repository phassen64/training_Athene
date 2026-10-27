class UsingCuboid
{
  public static void main(String[] args)
  {
    Cuboid oneCuboid = new Cuboid(3, 5, 7);
    System.out.printf("Quaderbreite: %d%n", oneCuboid.getWidth());


    System.out.printf("Oberflaeche: %d%n",
                       oneCuboid.getArea());
    System.out.printf("Grundflaeche: %d%n",
                       oneCuboid.getBase());
  }
}
