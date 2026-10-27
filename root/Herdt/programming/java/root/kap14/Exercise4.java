package com.herdt.java15.kap14;

public class Exercise4
{
  public Exercise4()
  {
    try
    {
      System.out.println("10111011 ist " + BinaryStringToNumber.parseBinary("10111011"));
      String s = "10511011";
      System.out.println(s + " ist " + BinaryStringToNumber.parseBinary(s));
    }
    catch (NoBinaryNumberException e)
    {
      System.out.println("Konvertierung fehlgeschlagen !");
      throw e;
    }
  }
  public static void main(String[] args)
  {
    Exercise4 exercise41 = new Exercise4();
  }
}
