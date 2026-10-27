#include <stdio.h>
#include <stdlib.h>
int main (void)
 {
  char wzeiger1[] = "ANKARA" ;
  char wzeiger2[] = "TOKIO" ;
  char wzeiger3[] = "SOFIA" ;
  char wzeiger4[] = "ROM" ;
  char wzeiger5[] = "BERLIN" ;
  char **azeiger;
  azeiger = calloc(5,sizeof(char*));
  azeiger[0] = wzeiger1;       /* Ablegen der Zeiger. */
  azeiger[1] = wzeiger2;
  azeiger[2] = wzeiger3;
  azeiger[3] = wzeiger4;
  azeiger[4] = wzeiger5;
  printf( "*wzeiger1: %c\n", *wzeiger1);  
  printf( "**azeiger: %c\n",**azeiger);
  printf( "*(*azeiger+1): %c\n", *(*azeiger+1) );
  printf( "*(*azeiger+2): %c\n", *(*azeiger+2) );
  printf( "**(azeiger+1): %c\n",**(azeiger+1) );
  printf( "**(azeiger+3): %c\n",**(azeiger+3) );
  printf( "*(*(azeiger+3)+1): %c\n",*(*(azeiger+3)+1) );
  getchar();
  return 0;
 }