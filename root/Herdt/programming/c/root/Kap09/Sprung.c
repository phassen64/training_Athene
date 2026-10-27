#include <stdio.h>
char code1(char b) /* A codiert -> Z */
{                  /* B codiert -> X */
  char erg;        /* Z codiert -> A */
    erg = 90-(b-65);
  return erg;
}
char code2(char b)
{
  char erg;        /* A codiert -> ! */
  erg = b - 32;    /* B codiert -> " */
  return erg;      /* Z codiert -> : */
}
char code3(char b)
{
  char erg;         /* Exklusiv ODER Verknuepfung */
  char key = '#';    /* mit einem Schluessel */
  erg = b ^ key;
  return erg;
}
char codierung(char z, int index)
{
  char zeichen;
  char (*zeiger)(char);
  int tab[3];
  tab[0] = code1;
  tab[1] = code2;
  tab[2] = code3;
  zeiger = tab[index-1];
  zeichen = zeiger(z);
  return zeichen;
}
int main(void)
{
  char u = 'Z';
  u = codierung(u, 3);
  printf("Das codierte Zeichen: %c", u);
  getchar();
  return 0;
}
