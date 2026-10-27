#include <stdio.h>
int menu(void)
   {
      int m;
      printf("\n\tMenue\n");
      printf("\t=====\n\n");
      printf("Addition..........1\n");
      printf("Subtraktion.......2\n");
      printf("Multiplikation....3\n");
      printf("Division..........4\n\n");
      printf("ENDE..............Nicht 1 bis 4\n\n");
      printf("Ihre Wahl: ");
      scanf("%d",&m);
      return m;
   } 
int main(void)
   {
      int i;
      do
         {
            i=menu();
            printf("Das Hauptprogramm wuerde Menuepunkt %d abarbeiten\n",i);
         }
      while ((i>0) && (i<5));
      return 0;
   }