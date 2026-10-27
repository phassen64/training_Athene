#include <stdio.h>
int main(void)
{
  int i = 0;
  int z = 65;
  while(z != 69) 
  {
    i++;	
    printf("Durchlauf: i = %d\n", i);
    printf("Beenden mit E \n");
    printf(" Ihre Wahl:  ");
    z = getchar();
    fflush(stdin);
  }
  return 0;
}
