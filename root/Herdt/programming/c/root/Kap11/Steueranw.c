#include <stdio.h>
#define TEST
int main(void)
{
  #ifndef TEST
    printf("Das Makro Test ist nicht definiert\n");
  #endif
  #ifdef TEST
    printf("Das Makro Test ist definiert\n");
  #endif
   getchar();
   return 0;
}
