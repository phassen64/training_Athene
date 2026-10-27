#include <stdio.h>
#define X 7
#define Y 3
#define MAX1 (X > Y) ? X : Y
int main(void)
{
   printf("%d\n", MAX1);
   getchar();
   return 0;
}
