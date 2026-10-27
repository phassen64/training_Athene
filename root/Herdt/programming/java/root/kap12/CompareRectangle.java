package com.herdt.java15.kap12;

import com.herdt.java15.kap09.forms.*;

class CompareRectangle
{
  Rectangle[][] rectArray = new Rectangle[8][8];

  CompareRectangle()
  {
    for (int i = 0; i < 8; i++)
      for (int j = 0; j < 8; j++)
        rectArray[i][j] = new Rectangle(i+1, j+1);

    for (int i = 0; i < 8; i++)
      for (Rectangle r : rectArray[i])  //foreach-Schleife, da compare das Array
        compare(r);                     //nur liest und nicht veraendert
  }

  void compare(Rectangle rect)
  {
    for (int i = 0; i < 8; i++)
      for (Rectangle r : rectArray[i])
        if ((r != rect) && (r.getArea()==rect.getArea()))
          System.out.printf("Die Rechtecke (%d x %d) und (%d x %d) sind gleich gross.%n",
                              rect.getWidth(), rect.getLength(),
                              r.getWidth(), r.getLength(),
                              rect.getArea(), r.getArea());
  }

  public static void main(String[] args)
  {
    new CompareRectangle();
  }
}