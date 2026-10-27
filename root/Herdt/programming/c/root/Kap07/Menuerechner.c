#include <stdio.h>
void eingabe(float *z1, float *z2)
{
  printf("Bitte geben Sie zwei Zahlen ein!\n");
  printf("Zahl1: ");
  scanf("%f", z1);
  printf("\nZahl2: ");
  scanf("%f", z2);
  printf("\n\n");
  fflush(stdin); /* Loescht die ueberfluessigen Zeichen aus dem Tastaturpuffer.*/
  return;
}
void druck(float erg)
{
  printf("\nErgebnis: %5.2f\n\n", erg);
  fflush(stdin); /* Loescht die ueberfluessigen Zeichen aus dem Tastaturpuffer.*/
  getchar();
}
float add(float z1, float z2)
{
  return z1 + z2;
}
float sub(float z1, float z2)
{
  return z1 - z2;
}
float mul(float z1, float z2)
{
  return z1 * z2;
}
float div(float z1, float z2)
{
  if (z2 == 0)
    return 0;
  return z1/z2;
}
int menu(void)
{
  printf("Menue\n");
  printf("====\n\n");
  printf("Addition................1\n");
  printf("Subtraktion.............2\n");
  printf("Multiplikation..........3\n");
  printf("Division................4\n");
  printf("Neue Zahlen.............N\n\n");
  printf("Ende....................E\n\n");
  printf("Ihre Wahl: ");
  return getchar();
}
int main(void)
{
   char auswahl;
   float erg, x, y;
   eingabe(&x, &y);
   do
   {
     switch(auswahl = menu())
     {
       case '1': 
           erg = add(x, y); 
	   druck(erg); 
	   break;
       case '2': 
           erg = sub(x, y); 
	   druck(erg); 
	   break;
       case '3': 
           erg = mul(x, y);
	   druck(erg); 
	   break;
       case '4': 
           erg = div(x, y);
	   druck(erg); 
	   break;
       case 'N':
       case 'n': 
           eingabe(&x, &y);
	   break;
       default: 
	   printf("Keine zulaessige Eingabe!\n"); 
	   break;
     }

   }
   while (auswahl != 'e' && auswahl != 'E');
   getchar();
   return 0;
}