package com.herdt.java15.kap17;

import java.io.*;
import java.util.*;
import java.math.*;

public class Measurements
{
  public static void main(String[] args)
  {
    char[] cf = {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'};
    int series = 1;
    try
    {
      String path = String.format("com%1$sherdt%1$sjava15%1$skap17%1$s", File.separator);
      // %1$s bedeutet: Parameter 1 (File.separator) als Zeichenkette einsetzen
      BufferedReader br = new BufferedReader(new FileReader(path + "valuesIn.dat")); //Eingabedatei zuweisen
      BufferedWriter bw = new BufferedWriter(new FileWriter(path + "valuesOut.dat")); // Ausgabedatei zuweisen

      for (int j = 0; j < 20; j++) //20 Messreihen lesen
      {
        br.read(cf);

        for (int measuredValue : cf)
        {
          System.out.printf("%4d", measuredValue);  //Messwert mit 4 Zeichen Breite ausgeben
        }
        bw.write(cf);
        System.out.printf(" Ende der Messreihe%3d%n", series++);
      }
      br.close();
      bw.close();
    }
    catch (IOException io)
    {
      System.out.println(io.getMessage());
    }
  }
}
