#include <stdio.h>
int main(void)
{
  int p1, p2;
  printf("Eingabe zweier Zahlen: \n");
  scanf("%d", &p1);
  scanf("%d", &p2);
  while((p1 - p2) != 0)
  {
    if((p1 - p2) > 0)
      p1 = p1 - p2;
    else
      p2 = (p2 - p1);
  }
  printf(" Der groesste gemeinsame Teiler ist %d.\n", p1);
  fflush(stdin);
  getchar();
  return 0;
}
