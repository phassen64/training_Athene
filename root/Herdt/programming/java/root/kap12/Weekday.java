package com.herdt.java15.kap12;

public enum Weekday
{
	MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY;

  static void writeAllDays()
  {
    for (Weekday day : Weekday.values())
      System.out.println(day);
  }
}
