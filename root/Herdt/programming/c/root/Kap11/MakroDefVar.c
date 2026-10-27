#include <stdio.h>
#define MAX(x,y) (x > y)? x : y
int main(void)
{
   printf("%d\n", MAX(3, 2));
   getchar();
   return 0;
}
