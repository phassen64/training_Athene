package com.herdt.java15.kap14;

class NPE
{
  public static void main(String[] args)
  {
    Object ref = null;
    ref.toString(); // erzeugt eine NullPointerException
  }
}