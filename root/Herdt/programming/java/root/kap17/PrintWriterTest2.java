package com.herdt.java15.kap17;

import java.io.*;
import static  java.lang.Math.PI;

class PrintWriterTest2
{
  public static void main(String[] args)
  {

      PrintWriter pw = new PrintWriter(System.out, false);

      pw.println("Ausgabe des Flächeninhalts für Kreise mit"); // String schreiben

      for (int r = 1; r <= 100; r++)
      {
        pw.print("Radius r = " + r + ": "); // String schreiben

        pw.println(PI * r * r); // double-Wert schreiben

        for (int f = 1; f <= 10000000; f++)
        {
          int d = f;
        }
      }

      pw.close();


  }
}