#include <stdio.h>
int main(void)
{
  float liste[5][2];
  int i;
  float gesamt;
/* Eingabe */
  for(i = 0; i < 5; i++)
  {
    printf("Eingabe der Wertepaare: \n");
    printf("Preis in EUR: ");
    scanf("%f", &liste[i][0]);
    printf("Mwst in %%: ");
    scanf("%f", &liste[i][1]);
  }
  /* Berechnung */
  gesamt = 0;
  for(i = 0; i < 5; i++)
  {
    gesamt += liste[i][0] * (1+liste[i][1] / 100);
  }
  printf("Der Bruttogesamtpreis betraegt: %5.2f EUR\n", gesamt);
  fflush(stdin);
  getchar();
  return 0;
}
