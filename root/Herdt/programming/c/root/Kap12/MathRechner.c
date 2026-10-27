#include <stdio.h>
#include <math.h>
#include "Operation.c"

void druck(float erg)
{
  printf("\nErgebnis: %5.2f\n\n", erg);
  fflush(stdin); /* Loescht die ueberfluessigen Zeichen aus dem Tastaturpuffer.*/
  getchar();
}
void eingabe(float *z1, float *z2)
{
  printf("Bitte geben Sie zwei Zahlen ein!\n");
  printf("Zahl1: ");
  scanf("%f", z1);
  printf("\nZahl2: ");
  scanf("%f", z2);
  printf("\n\n");
  fflush(stdin); /* Loescht die ueberfluessigen Zeichen aus dem Tastaturpuffer.*/
}
int menu(void)
{
  printf("Menue\n");
  printf("====\n\n");
  printf("Addition....................................1\n");
  printf("Subtraktion.................................2\n");
  printf("Multiplikation..............................3\n");
  printf("Division....................................4\n");
  printf("Potenz (Zahl1 hoch Zahl2)...................5\n");
  printf("Wurzel aus Zahl1 zur Zahl2..................6\n");
  printf("Sinus.......................................7\n");
  printf("Cosinus der Zahl1...........................8\n");
  printf("Tangens der Zahl1...........................9\n");
  printf("Neue Zahlen.................................N\n\n");
  printf("Ende........................................E\n\n");
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
	   druck(erg); break;
       case '2':
	   erg = sub(x, y); 
	   druck(erg); break;
       case '3': 
	   erg = mul(x, y); 
	   druck(erg); break;
       case '4': 
	   erg = div(x, y); 
	   druck(erg); break;
       case '5': 
	   erg = potenz(x, y); 
	   druck(erg); break;
       case '6': 
	   erg = wurz(x, y); 
	   druck(erg); break;
       case '7': 
	   erg = sinus(x); 
	   druck(erg); break;
       case '8': 
	   erg = cosinus(x); 
	   druck(erg); break;
       case '9': 
	   erg = tangens(x); 
	   druck(erg); break;
       case 'N':
       case 'n': 
	   eingabe(&x, &y); break;
     }
   }
   while (auswahl != 'e' && auswahl != 'E');
   return 0;
}
