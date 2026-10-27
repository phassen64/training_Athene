#include <stdio.h>
int main(void)
   {
      int i;
      goto Eingabe;
      Hinweis:  printf("Es gibt nur die Noten von 1 - 6 !!\n\n");
      Eingabe : printf("Bitte geben Sie Ihre Note ein ( 1-6 ): ");
      scanf("%d",&i);
      if ((i < 1) || (i > 6))  
	 goto Hinweis;
      fflush(stdin);
      getchar();
      return 0;
   }
