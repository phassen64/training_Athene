package com.herdt.java15.kap18;

public class Exercise
{
  public static void main(String args[])
  {
    assert args.length == 2: "Die Anzahl der Parameter ist " + args.length;
    System.out.println("Es wurden " + args.length + " Parameter angegeben.");
  }
}