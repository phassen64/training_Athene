package com.herdt.java15.kap13;

public class Book implements Comparable<Book>
{
  private String author;   //Autor
  private String title;    //Titel
  private int issue;       //Auflagenhoehe

  public String getAuthor()
  {
    return author;
  }

  public String getTitle()
  {
    return title;
  }

  public int getIssue()
  {
    return issue;
  }

  public void setAuthor(String author)
  {
    this.author = author;
  }

  public void setTitle(String title)
  {
    this.title = title;
  }

  public void setIssue(int issue)
  {
    this.issue = issue;
  }

  public Book(String author, String title, int issue)
  {
    setAuthor(author);
    setTitle(title);
    setIssue(issue);
  }

  public int compareTo(Book o)
  {
    if ((o == null) && (o.getClass() != getClass()))
      return -1;
    int i = author.compareTo(o.author);
    if (i != 0)
      return i;
    else
    {
      i = title.compareTo(o.title);
      if (i != 0)
        return i;
      else
      {
        i = issue - o.issue;
        return i;
      }
    }
  }

  public int hashCode()
  {
    return author.hashCode() + title.hashCode();
  }

  public boolean equals(Object o)
  {
    if ((o == null) && (o.getClass() != getClass()))
      return false;
    else
    {
      Book obj = (Book) o;
      if (obj.author.equals(author) && obj.title.equals(title) &&
         obj.issue  == issue)
        return true;
      else
        return false;
    }
  }
}
