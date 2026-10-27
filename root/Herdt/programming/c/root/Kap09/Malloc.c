#include <stdio.h>
#include <stdlib.h>
int main( void )
{
  int *zeiger;
  //if ((zeiger = malloc(sizeof(int))) != NULL)
  // Bei eventueller Fehlermeldung wegen Typinkompatibilität - cast erforderlich:   
  if ((zeiger = (int*) malloc(sizeof(int))) != NULL)
  {
    *zeiger = 17;
    printf("Inhalt des Speicherbereichs: %d\n",*zeiger);
	*zeiger = 5000;
    printf("Inhalt des Speicherbereichs: %d\n", *zeiger);
    free(zeiger);
  }
  else
    printf( "Nicht genuegend Speicherplatz vorhanden!") ;
  getchar();  
  return 0;
}
