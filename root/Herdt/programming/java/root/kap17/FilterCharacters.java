package com.herdt.java15.kap17;

import java.io.*;

public class FilterCharacters
{
  public static void main(String[] args)
  {
    try
    {
      System.out.println("Geben Sie eine Zeichenkette ein: ");

      //von Standardeingabegeraet lesen
      BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
      String s = reader.readLine();

      //gefilterte Ausgabe schreiben
      String path = String.format("com%1$sherdt%1$sjava8%1$skap17%1$s", File.separator);
      PrintWriter pw = new PrintWriter(new MyFilterWriter(new FileWriter(path + "filter.dat")));
      pw.print(s);
      pw.close();
    }
    catch (IOException ex)
    {
      System.out.println(ex.toString());
    }
  }
}