#include <stdio.h>
int main(void)
 {
  int eingabe1,eingabe2;
  printf("Bitte geben Sie nacheinander drei Zahlen ein: \n");
  /* Drei Eingaben werden erwartet, gespeichert werden nur 2 */
  scanf("%d%*d%d",&eingabe1,&eingabe2); 
  printf("\nGespeicherte Eingabe = %d",eingabe1);
  printf("\nGespeicherte Eingabe = %d",eingabe2);
  fflush(stdin);  /* Loeschen aller Zeichen im Eingabepuffer */
  getchar();
  return 0;
}
