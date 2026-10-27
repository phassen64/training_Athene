#include <stdio.h>
#include <stdlib.h>
int main (void)
{
 int i,k,temp;
 int menge[10000];
 int anzahl = 10000;
 int *zeiger;
 zeiger = menge;
  for ( i=0; i<anzahl; i++) 
     menge[i] = rand();
   for (k=0; k<anzahl-1; k++ )
     for ( i=k; i<anzahl; i++)
        if  (*(zeiger+i) < *(zeiger+k))
        {
         temp=*(zeiger+k);
         *( zeiger+k ) = *( zeiger+i );
         *( zeiger+i ) = temp;
        };
   for ( i=0; i<anzahl; i++) 
     printf( "%d \t",*(zeiger+i) );
   printf("\n");
   getchar();
   return 0;
  }
