#include <stdio.h>
#include <stdlib.h>
const int n = 1000;
int main(void)
{
  int i, k, temp;
  int *zeiger;
  zeiger = calloc(n + 1,sizeof(int));
  for(i = 0; i <= n; i++) 
    *(zeiger + i) = rand();
  for(k = 0; k < n; k++)
    for(i = k+1; i <= n; i++)
      if(*(zeiger + i)< *(zeiger + k))
      {
        temp = *(zeiger + k);
        *(zeiger + k) = *(zeiger + i);
        *( zeiger+i ) = temp;
      }
  printf("\n");
  for(i = 0; i <= n; i++) 
    printf("%d \t", *(zeiger + i));
  printf("\n");
  free(zeiger);
  getchar();
  return 0;
}