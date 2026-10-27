#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int anz,i;
 if (argc != 3)
  {
   printf("Parameteranzahl falsch!");
   getchar();
   return 1;
  };
  printf("Programmname: %s\n",argv[0]);
 anz =atoi (*(argv+1));
 for (i=anz; i>0; i--)
  puts(*(argv+2));
 getchar();
 return 0;
}