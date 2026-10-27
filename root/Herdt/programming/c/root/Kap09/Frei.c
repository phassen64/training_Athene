#include <stdio.h>
#include <stdlib.h>
int main( void )
{
  int  *zeiger;
  if ((zeiger = malloc(sizeof(int))) != NULL)
  {
    *zeiger = 17;
    printf("Inhalt des Speicherbereichs: %d\n",*zeiger);
    free(zeiger);
    printf("Speicher wurde wieder freigegeben!\n");
  }
  else
    printf( "Nicht genuegend Speicherplatz vorhanden!") ;
  getchar();
  return 0;
}