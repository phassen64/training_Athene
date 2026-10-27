package com.herdt.java15.kap15;

import java.io.*;
import java.util.*;

public class Exercise1
{
  public static void main(String[] args)
  {
    int DayCountMax = 14;
    int Measurements = 6;

    Random rd = new Random();
    int[][] x = new int[DayCountMax][Measurements];

    long average =0;
    long averageTotal = 0;

    System.out.printf("Temperaturen in Grad Celsius%n----------------------------%n");
    for (int i = 0; i < DayCountMax; i++)
    {
      average = 0;
      for (int j = 0; j < Measurements; j++)
      {
        x[i][j] = Math.abs(rd.nextInt(15)) + 20;
        System.out.print(x[i][j] + "  ");
        average += x[i][j];
      }
      average /= Measurements;
      System.out.println("Durchschnitts-Temperatur: " + average);
      averageTotal += average;
    }
    averageTotal /= DayCountMax;
    System.out.println("Gesamt-Durchschnitts-Temperatur: " + averageTotal);
  }
}
