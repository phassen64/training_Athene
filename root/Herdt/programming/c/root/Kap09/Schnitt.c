#include <stdio.h>
int add(int z1, int z2)
 {
  return (z1+z2);
 }
int sub(int z1, int z2)
 {
   return (z1-z2);
 }
int mul( int z1, int z2 )
 {
  return (z1*z2);
 }
int main (void)
 {
  int i;
  int a[2];  /* Sprungtabelle */
  int (*zeiger)(int,int);
  int erg;
  a[0] = add;
  a[1] = sub;
  a[1] = mul;   /* Umbiegen des Zeigers auf eine andere Funktion */
  /* a[2] = mul; */
  for ( i = 0 ; i < 2 ; i++)
  {
   zeiger = a[i];
   erg=zeiger( 5, 6 );
   printf( "Das Ergebnis ist: %d\n ", erg );
  };
   getchar();
   return 0;
 }