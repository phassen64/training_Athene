#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char *s1, *s2, *s3;
   s1 = malloc(80*sizeof(char));
   s2 = malloc(80*sizeof(char));
   s3 = malloc(80*sizeof(char));
   gets(s1);
   gets(s2);
   gets(s3);
   printf("\n\n\n\n");
   puts(s1);
   puts(s2);
   puts(s3);
   free(s1);
   free(s2);
   free(s3);
   getchar();
   return 0;
}
