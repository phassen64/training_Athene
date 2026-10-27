package com.herdt.java15.kap15;

import java.util.*;
import java.time.*;
import java.time.temporal.*;

public class Exercise2
{
  public static void main(String[] args)
  {
    int monat = 0,  jahr = 0;
    try
    {
      if (args.length<2) throw new RuntimeException("Bitte Monat und Jahr als Parameter angeben");
      monat = Integer.parseInt(args[0]);
      jahr = Integer.parseInt(args[1]);

      if (!((monat > 0) && (monat < 13))) throw new NumberFormatException("Als Monatangaben sind nur 1...12 erlaubt");
    }
    catch (NumberFormatException e)
    {
      System.out.println(e.getMessage());
      System.exit(1);
    }
    LocalDate lDate = LocalDate.of(jahr, monat, 1);
    printCalender(lDate);
  }

  static void printCalender(LocalDate ld)
  {
	int pos;
	int monat = ld.getMonthValue();

    System.out.println("\nKalender für " + monate(ld) + " " + ld.getYear());
   	System.out.println("Wo\tMo\tDi\tMi\tDo\tFr\tSa\tSo");

	WeekFields week = WeekFields.of(Locale.getDefault());
	System.out.print(ld.get(week.weekOfYear()));
    switch (ld.getDayOfWeek())
    {
		case MONDAY: 	pos = 1; break;
		case TUESDAY: 	pos = 2; break;
		case WEDNESDAY:	pos = 3; break;
		case THURSDAY: 	pos = 4; break;
		case FRIDAY: 	pos = 5; break;
		case SATURDAY: 	pos = 6; break;
		case SUNDAY: 	pos = 7; break;
		default: 		pos = 0;
	}

	for (int i = 1; i <= pos; i++)
      System.out.print("\t");

    while (monat == ld.getMonthValue())
    {
      System.out.print(ld.getDayOfMonth() + "\t" );
      ld = ld.plusDays(1);
      if (ld.getDayOfWeek() == DayOfWeek.MONDAY)
        System.out.print("\n" + ld.get(week.weekOfYear()) + "\t");
    }
  }

  static String monate(LocalDate date)
  {
    switch (date.getMonth())
    {
      case JANUARY: return("Januar");
      case FEBRUARY: return("Februar");
      case MARCH: return("März");
      case APRIL: return("April");
      case MAY: return("Mai");
      case JUNE: return("Juni");
      case JULY: return("Juli");
      case AUGUST: return("August");
      case SEPTEMBER: return("September");
      case OCTOBER: return("Oktober");
      case NOVEMBER: return("November");
      case DECEMBER: return("Dezember");
      default: return("");
    }
  }
}
