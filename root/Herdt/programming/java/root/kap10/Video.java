package com.herdt.java15.kap10;

class Video extends MediaAdapter
{
  // die Klasse Audio überschreibt alle Methoden der Adapterklasse

  public void display()
  {
    System.out.println(this.getClass() + ": Display video");
  }
  //getClass() ermittelt den Namen der Klasse einschliesslich package

  public void play()
  {
    System.out.println(this.getClass() + ": Play video");
  }

  public void stop()
  {
    System.out.println(this.getClass() + ": Video stopped");
  }
}