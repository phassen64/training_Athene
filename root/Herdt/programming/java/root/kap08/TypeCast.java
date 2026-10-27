class TypeCast
{
  public static void main(String args[])
  {
    Rectangle firstForm = new Cuboid();
    Rectangle secondForm = new Rectangle();
    Cuboid oneCuboid = (Cuboid)firstForm;
    Cuboid anotherCuboid = (Cuboid)secondForm;
  }
}
