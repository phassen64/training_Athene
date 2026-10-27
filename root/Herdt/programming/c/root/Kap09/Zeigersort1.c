#include <stdio.h>
#include <stdlib.h>
const int anzahl = 10000;
int main (void)
  {
  int i,k,temp;
  int *zeiger;
  zeiger = calloc(anzahl, sizeof(int));
  for ( i=0; i<anzahl; i++) 
     *(zeiger+i) = rand();
  for (k=0; k<anzahl-1; k++ )
     for ( i=k; i<anzahl; i++)
        if  (*(zeiger+i) < *(zeiger+k))
        {
          temp=*(zeiger+k);
         *( zeiger+k ) = *( zeiger+i );
         *( zeiger+i ) = temp;
        }
  printf("\n");
  for ( i=0; i<anzahl; i++) 
     printf( "%d \t",*(zeiger+i) );
   printf("\n");
   getchar();
   return 0;
  }