package com.herdt.java15.kap10;

class Audio extends MediaAdapter
{
  // die Klasse Audio benoetigt die Methoden play() und stop()
  // display() wird nicht benoetig

  public void play()
  {
    System.out.println(this.getClass() + ": Play audio");
  }
  //getClass() ermittelt den Namen der Klasse einschliesslich package

  public void stop()
  {
    System.out.println(this.getClass() + ": Audio stopped");
  }
}