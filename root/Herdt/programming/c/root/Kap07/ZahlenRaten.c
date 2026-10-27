#include <stdio.h>
int zahl;
int nummer = 0;
int suchezahl( int min, int max )      /*rekursive Funktion */
   {
      int test;
      nummer++;
      printf("\nDurchlauf Nr.: %d\n",nummer);
      test=( min+max ) / 2;
      if  ( test < zahl )              /* Rekursionsbedingung */
         {
            test = suchezahl(test, max);
         }
      else
         {
            if ( test > zahl )
                  {
                     test =  suchezahl(min, test);
                  }
         }
      return test;
   }
int main( void )
   {
      int min;
      int max;
      int ergebnis;
     do
    {
      printf( "Zufallszahl aus dem Intervall: " );
      scanf( "%d", &zahl );
      printf( "\nAnfangswert des Intervalls: \t " );
      scanf( "%d", &min );
      printf( "\nEndwert des Intervalls: \t" );
      scanf( "%d", &max );
     }
     while ((min-max) > 0 || (min*max) < 0  || (zahl < min) || (zahl>max ));         
      ergebnis = suchezahl( min, max );
      printf( "\n\aDie Zahl ist: %d\n", ergebnis );
      fflush(stdin);
      getchar();
      return 0;
}