#include <stdio.h>
int main(void)
{
   int i;
   for (i=1; i<20 ; i++)
   {
     if ((i%2) == 0)
       continue;
     printf("aktuelle Zahl ist:  %d\n",i);
   }
  getchar();
  return 0;
}