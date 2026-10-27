class Excercise5
{
  public static void main(String[] args)
  {
    int d = 1;
    int e = 2;

    d *= e;
    System.out.printf("d: %d, e: %d%n", d, e);

    d += e++;
    System.out.printf("d: %d, e: %d%n", d, e);

    d -= 3 - 2 * e;
    System.out.printf("d: %d, e: %d%n", d, e);

    e /= (d + 1);
    System.out.printf("d: %d, e: %d%n", d, e);
  }
}
