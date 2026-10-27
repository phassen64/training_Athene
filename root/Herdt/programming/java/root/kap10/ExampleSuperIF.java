package com.herdt.java15.kap10;

public interface ExampleSuperIF
{
	public default String saySomething()
	{
		return "Hallo aus dem Interface ExampleSuperIF";
	}
}