package com.herdt.java15.kap12;

class CalcSquare
{
  public static void main(String[] args)
  {
    int[] prime = {2, 3, 5, 7, 11, 13};
    for (int pr : prime)
      System.out.print(pr + " ");

    System.out.println("\n"); //Zeilenumbruch und Leerzeile ausgeben

    double[] squares = new double[10];

    for (int i = 0; i < 10; i++)
      squares[i]= (double)(i * i);

    for (int i = 0; i < 10; i++)
      System.out.println("Das Quadrat von " + i + " ist " + squares[i]);

    double[] squaresCopy = squares.clone();

    for (int i = 0; i < 10; i++)
      squaresCopy[i] = 0.5;

    for (int i = 0; i < 10; i++)
      System.out.println(i + ". Wert: " + squares[i] + " bzw. " + squaresCopy[i]);

  }
}


