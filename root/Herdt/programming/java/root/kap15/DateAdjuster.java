package com.herdt.java15.kap15;
import java.time.*;
import java.time.temporal.*;

class DateAdjuster
{
	public static void main(String[] args)
	{
		LocalDate firstMonday = LocalDate.of(2021, 3, 12). with(
			TemporalAdjusters.nextOrSame(DayOfWeek.MONDAY));
		System.out.println(firstMonday.toString());
 	}
}