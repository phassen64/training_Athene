package com.herdt.java15.kap17;

import java.io.*;

public class MyFilterWriter extends FilterWriter
{
  public MyFilterWriter(Writer writer)
  {
    super(writer);
  }
  public void write(int c) throws IOException
  {
    if (((c < 48) || (c > 122)) || ((c > 57) && (c < 65)) || ((c > 90) && (c < 97)))
      c = 42;

    super.write(c); // Aufruf der Methode der Superklasse mit gefiltertem Wert
  }
  public void write(char[] cbuf, int off, int len) throws IOException
  {
    for (int i = 0; i < len; i++)
      write(cbuf[i + off]);  // Aufruf der Methode write(int c)
  }
  public void write(String str, int off, int len) throws IOException
  {
    write(str.toCharArray(), off, len); // Aufruf der Methode write(char[] cbuf, int off, int len)
  }
}