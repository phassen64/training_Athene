package com.herdt.java15.kap10;

class Picture extends MediaAdapter
{
  // die Klasse Picture benoetigt lediglich die Methode display()
  // play() und stop() werden nicht benoetig

  public void display()
  {
    System.out.println(this.getClass() + ": Display picture");
  }
  //getClass() ermittelt den Namen der Klasse einschliesslich package
}