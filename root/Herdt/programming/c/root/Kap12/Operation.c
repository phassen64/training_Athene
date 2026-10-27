#include <math.h>
#define PI 3.14
float add(float z1, float z2)
{
  return z1 + z2;
}
float sub(float z1, float z2)
{
  return z1 - z2;
}
float mul(float z1, float z2)
{
  return z1 * z2;
}
 float div(float z1, float z2)
{
  if (z2 == 0)
    return 0;
  return z1/z2;
}
float potenz(float z1, float z2)
{
  if (z2 == 0)
    return 0;
  return (float)pow(z1, z2);
}
float wurz(float z1, float z2)
{
  if (z2 == 0)
    return 0;
  return (float)pow(z1, 1/z2);
}
float sinus(float z1)
{
  return (float)sin(z1*PI/180);
}
float cosinus(float z1)
{
  return (float)cos(z1*PI/180);
}
float tangens(float z1)
{
  return (float)tan(z1*PI/180);
}

