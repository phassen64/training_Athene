#include <stdio.h> 
#define TESTEN 1
int main (void)
{
  #if TESTEN 			/* Beginn der Verzweigung mit der Abfrage, ob TESTEN */
    printf( "Textausgabe\n" ); 	/* definiert ist */
  #endif
  getchar();
  return 0;
}
