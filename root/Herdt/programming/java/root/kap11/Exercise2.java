package com.herdt.java15.kap11;

public class Exercise2
{
  public static void main(String[] args)
  {
    String s1 = "Meier";
    String s2 = "Mayer";

    if(s1.compareTo(s2) <= 0)
    {
      System.out.println(s1.toLowerCase());
      System.out.println(s2.toLowerCase());
    }
    else
    {
      System.out.println(s2.toLowerCase());
      System.out.println(s1.toLowerCase());
    }
  }
}
