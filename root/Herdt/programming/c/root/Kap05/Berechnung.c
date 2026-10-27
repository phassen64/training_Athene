#include<stdio.h>
int zahl1;
int zahl2;
int add(void)
{
  zahl1 += 15;
  zahl2 = zahl1 * 2;
  return 0;
}
int main(void)
{
  zahl1 = 1;
  zahl2 = 1;
  printf("Zahl1 = %d\n", zahl1);
  printf("Zahl2 = %d\n", zahl2);
  add();
  printf("Zahl1 = %d\n", zahl1);
  printf("Zahl2 = %d\n", zahl2);
  getchar();
  return 0;
 }
