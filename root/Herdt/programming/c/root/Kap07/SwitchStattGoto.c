#include <stdio.h >
int main(void)
{
  int i, a;
  do
  {
    a = 0;
    printf("Bitte geben Sie Ihre Note ein (1 - 6): ");
    scanf("%d", &i);
    switch(i)
    {
      case 1: 
        printf("Sehr Gut!"); 
        a = 1; 
        break;
      case 2: 
        printf("Gut!"); 
        a = 1; 
        break;
      case 3: 
        printf("Befriedigend!") ;
        a = 1; 
        break;
      case 4: 
        printf("Ausreichend!");
        a = 1;
        break;
      case 5: 
        printf("Mangelhaft!") ;
        a = 1;
        break;
      case 6: 
        printf("Ungenuegend!") ;
        a = 1; 
        break;
      default:
        printf("Fehlerhafte Eingabe!\n");
        printf("Nur Noten von 1-6 sind gueltig!\n");
        break;
    }
  }
  while(a == 0);
  fflush(stdin);
  getchar();
  return 0;
}
