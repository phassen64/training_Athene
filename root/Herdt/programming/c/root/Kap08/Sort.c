#include <stdio.h>
int main (void)
{
  int index;
  int nummer;
  int ok;
  char buchstabe;
  char liste[20];
  int max = 5;
  printf( "Bitte geben Sie die Liste der Buchstaben ein: \n");
  for (index = 0; index < max; index++)
    {
     scanf("%c",&liste[index]);
     if (liste[index] < 65 ) index--; /* Entfernen der Steuerzeichen */
    }
  nummer = 0;  /* Nummer des Durchlaufs */
  do
   {
    ok = 0;
    nummer++;
    for (index = 0 ; index < max-nummer ; index++)
     {
      if (liste[index] > liste[index+1])
        {
          ok=1;
          buchstabe = liste[index];
          liste[index] = liste[index+1];
          liste[index+1] = buchstabe;
        };
     }
   }
    while (ok==1);
    printf ("Sortierte Liste: \n");
    for (index = 0; index < max; index++)
      {
       printf("%c ",liste[index]);
      }
    printf("\nSortierung erfolgte nach %d Durchlaeufen.",nummer);
  fflush(stdin);
  getchar();
  return 0;
}