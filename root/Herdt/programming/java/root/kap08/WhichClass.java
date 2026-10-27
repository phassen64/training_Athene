class WhichClass
{
  public static void main(String[] args)
  {
    Rectangle firstForm = new Cuboid();
    Rectangle secondForm = new Rectangle();
    System.out.println(firstForm.getClass());
    System.out.println(secondForm.getClass());
  }
}
