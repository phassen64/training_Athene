#include <stdio.h>
int zahl;
void druck(void)
{
  int zahl;
  zahl = 19;
  printf("zahl = %d\n", zahl);
}
int main(void)
{
  zahl = 17;
  printf("zahl = %d\n", zahl);
  druck();
  printf("zahl = %d\n", zahl);
  getchar();
  return 0;
}
