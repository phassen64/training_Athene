package com.herdt.java15.kap14;

public class Exercise5
{
  public Exercise5()
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
      e.printStackTrace();
      throw e;
    }
  }
  public static void main(String[] args)
  {
    try
    {
      Exercise5 exercise51 = new Exercise5();
    }
    finally
    {
      System.out.println("Das Programm wird im finally-Block fortgesetzt");
    }
  }
}
