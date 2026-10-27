package com.herdt.java15.kap17;

import java.io.*;
import static java.lang.System.*;

public class ReadWriteData
{
  public static void main(String[] args)
  {
    String more = "j";
    try
    {
      String path = String.format("com%1$sherdt%1$sjava15%1$skap17%1$s", File.separator);
      PrintWriter writer = new PrintWriter(new FileWriter(path + "personal.dat"));
      while (more.equals("j"))
      {
        //Personendaten einlesen
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        out.println("Geben Sie den Namen ein: ");
        String name = reader.readLine();
        out.println("Geben Sie das Geschlecht ein (m/w): ");
        String gender = reader.readLine();
        out.println("Geben Sie die Groesse ein (in cm): ");
        String size = reader.readLine();
        out.println("Geben Sie das Gewicht ein (in kg): ");
        String weight = reader.readLine();

        try
        {
          int i_size = Integer.parseInt(size);
          float f_weight = Float.parseFloat(weight);

          //Personendaten speichern
          writer.println(name);
          writer.println(gender);
          writer.println(i_size);
          writer.println(f_weight);
        }

        catch (NumberFormatException ex)
        {
          System.out.println("Fehlerhafte Eingabe: " + ex.getMessage());
        }

        //weitere Personendaten einlesen?
        out.println("\nWollen Sie Daten fuer weitere Personen eingeben (j/n)? ");
        more = reader.readLine();
      }
      writer.close();
    }
    catch (IOException io)
    {
      out.println(io.getMessage());
    }
  }
}