package com.herdt.java15.kap14;

class NoBinaryNumberException extends RuntimeException
{
  public NoBinaryNumberException(String msg)
  {
    super(msg);
  }
  public NoBinaryNumberException()
  {
    super();
  }
  public NoBinaryNumberException(String s, int pos)
  {
    super(s + " ist keine Binaerzahl (" + pos + ". Stelle)");
  }
}
