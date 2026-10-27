#include <stdio.h>
int main(void)
{
  const double radius = 14.0;
  const int pi = 3.14;
  printf("Der Kreisumfang betraegt: %f.", 2 * pi * radius);
  printf("Die Kreisflaeche betraegt: %f.", pi * radius * radius);
  getchar();
  return 0;
}
