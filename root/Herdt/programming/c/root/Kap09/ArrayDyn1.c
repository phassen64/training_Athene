#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int x, y, ii, jj;
  int *zeiger;
  printf("Bitte geben Sie zwei Zahlen fuer die Dimension des Arrays ein:\n");
  scanf("%d%d", &x, &y);
  zeiger = malloc(x*y*sizeof(int));
  for(ii = 0; ii < x; ii++)
    for(jj = 0; jj < y; jj++)
    {
       *(zeiger + ii + jj) = rand();
    }
  for(ii = 0; ii < x; ii++)
  {
    for(jj = 0; jj < y; jj++)
    {
       printf("%d ", *(zeiger + ii + jj));
    }
    printf("\n\n");
  }
  fflush(stdin);
  getchar();
  return 0;
}
