package com.herdt.java15.kap11;

public class Exercise4
{
  private String s1 = "Meier";
  private String s2 = "Mayer";

  public Exercise4()
  {
    printLetter(s1);
    printLetter1(s2);
  }

  public static void main(String[] args)
  {
    new Exercise4();
  }

  public void printLetter(String name)
  {
    StringBuffer sb = new StringBuffer();
    sb.append("Sehr geehrte(r) Frau/Herr ");
    sb.append(name);
    // \n ist eine Escape-Sequenz, die einen Zeilenvorschub bewirkt
    sb.append("\nwir gratulieren Ihnen zur erfolgreichen Lösung der Übungsaufgabe.");
    System.out.println(sb.toString());
  }
  public void printLetter1(String name)
  {
    StringBuilder sb = new StringBuilder();
    sb.append("Sehr geehrte(r) Frau/Herr ");
    // \n ist eine Escape-Sequenz, die einen Zeilenvorschub bewirkt
    sb.append("\nwir gratulieren Ihnen zur erfolgreichen Lösung der Übungsaufgabe.");
    sb.insert(26, name);
    System.out.println(sb.toString());
  }
}
