package com.herdt.java15.kap11;
import static java.lang.System.out;

class MultilineLiteral
{
  public static void main(String[] args)
  {
    String s0 = """
               Lorem ipsum dolor sit amet, consetetur sadipscing elitr,
               sed diam nonumy eirmod tempor invidunt ut labore et
               dolore magna aliquyam erat, sed diam voluptua.""";

    String s1 = "SELECT " +
	              "a.id, " +
	              "a.zip, " +
	              "a.place, " +
	              "a.street " +
                  "FROM address a;";

    String s2 = """
    			SELECT \
	               a.id, \
	               a.zip, \
	               a.place, \
	               a.street, \
	               FROM address a;""";

   String s3 = """
    			SELECT       \s
	               a.id,     \s
	               a.zip,    \s
	               a.place,  \s
	               a.street, \s
	               FROM address a;""";

    out.println(s0);
    // out.println(s1);
    // out.println(s2);
    // out.println(s3);

  }
}