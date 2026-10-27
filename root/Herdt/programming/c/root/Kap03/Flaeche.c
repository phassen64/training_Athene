#include <stdio.h>
int main(void)
{
  const double radius = 14.0;
  const double pi = 3.14;
  printf("Der Kreisumfang betraegt: %f.\n", 2 * pi * radius);
  printf("Die Kreisflaeche betraegt: %f.\n", pi * radius * radius );
  getchar();
  return 0;
}
