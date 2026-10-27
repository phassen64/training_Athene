package com.herdt.java15.kap13;
import java.util.*;

public class Exercise
{
  Book[] books = new Book[6];

  public static void main(String[] args)
  {
    if (args.length != 1)
    {
      System.out.println("Geben Sie als Parameter die Aufgabennummer 6, 7 oder 8 an." );
    }
    else
    {
      Exercise uc = new Exercise(args[0]);
    }
  }

  public Exercise(String part)
  {
    books[0] = new Book("Goethe", "Faust I", 20000);
    books[1] = new Book("Schiller", "Wilhelm Tell", 10000);
    books[2] = new Book("Mann", "Der Untertan", 15000);
    books[3] = new Book("Kant", "Die Aula", 50000);
    books[4] = new Book("Goethe", "Faust II", 20000);
    books[5] = new Book("Fontane", "Effi Briest", 10000);
    if (part.equals("6"))
      part6();
    else if (part.equals("7"))
      part7();
    else if (part.equals("8"))
      part8();
    else
      System.out.println("Geben Sie als Parameter die Aufgabennummer 6, 7 oder 8 an." );
  }

  // Aufgabenteil 6
  // **************
  public void part6()
  {
    System.out.println("\nLoesung Aufgabenteil 6");
    System.out.println("**********************");
    ArrayList<Book> bookList = new ArrayList<Book>();
    for (int i = 0; i < books.length; i++)
      bookList.add(books[i]);
    // Ausgabe unsortiert
    show(bookList);
    // in umgekehrt sortierter Reihenfolge
    System.out.println("\n*** in umgekehrter Reihenfolge ***\n");
    Collections.sort(bookList, Collections.reverseOrder());
    show(bookList);
    // in sortierter Reihenfolge
    System.out.println("\n*** in sortierter Reihenfolge ***\n");
    Collections.sort(bookList);
    show(bookList);
  }

  // Aufgabenteil 7
  // **************
  public void part7()
  {
    System.out.println("\nLoesung Aufgabenteil 7");
    System.out.println("**********************");
    // verwenden einer HashMap
    System.out.println("\n*** Ausgabe der HashMap ***\n");
    HashMap<String, Book> bookMap = new HashMap<String, Book>(11);
    for (int i = 0; i < books.length; i++)
      bookMap.put(""+i,books[i]);
    show(bookMap.values());
     // verwenden einer TreeMap
    System.out.println("\n*** Ausgabe der TreeMap ***\n");
    TreeMap<String, Book> bookTree = new TreeMap<String, Book>(bookMap);
    show(bookTree.values());
  }

  // Aufgabenteil 8
  // **************
  public void part8()
  {
    System.out.println("\nLoesung Aufgabenteil 8");
    System.out.println("**********************");
    // verwenden eines HashSets
    System.out.println("\n*** Ausgabe der HashSet ***\n");
    HashSet<Book> bookSet = new HashSet<Book>();
    for (int i = 0; i < books.length; i++)
      bookSet.add(books[i]);
    bookSet.add(new Book("Goethe", "Faust II", 20000));
    show(bookSet);
    // verwenden eines TreeSet
    System.out.println("\n*** Ausgabe der TreeSet ***\n");
    TreeSet<Book> bookTreeSet = new TreeSet<Book>();
    bookTreeSet.addAll(bookSet);
    show(bookTreeSet);
  }

  private void show(Collection l)
  {
    Iterator iter = l.iterator();
    while (iter.hasNext())
    {
      Book b = (Book)iter.next();
      System.out.println(b.getAuthor() + ": \"" + b.getTitle() +
                         "\" \tAuflage: " + b.getIssue() + " Stueck");
    }
  }
}
