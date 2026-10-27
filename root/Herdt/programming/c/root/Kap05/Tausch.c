#include <stdio.h>
void tauschen(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
  return;
}
int main(void)
{
  int zahl1 = 10, zahl2 = 15;
  printf("Vor dem Tausch:\n");
  printf("Zahl1=%d\nZahl2=%d\n", zahl1, zahl2);
  tauschen(&zahl1, &zahl2);
  printf("Nach dem Tausch:\n");
  printf("Zahl1=%d\nZahl2=%d\n", zahl1, zahl2);
  getchar();
  return 0;
}

