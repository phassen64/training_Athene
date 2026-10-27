#include <stdio.h>
#include <stdlib.h>
char* convert(char* s)
{
   int i;
   for(i = 0; *(s+i) != '\0'; i++)
     printf("%c", *(s+i));
     printf("\t[ ");
   for(i = 0;*(s+i) != '\0'; i++)
     printf("%d ", *(s+i));
     printf("]\n"); 
   return s;
}
int main(void)
{
   char *s;
   s = (char*) malloc(80 * sizeof(char));
   printf("Bitte geben Sie einen kurzen Text ein:\n");
   gets(s);
   s = convert (s); 
   free(s);
   getchar();
   return 0;
}
