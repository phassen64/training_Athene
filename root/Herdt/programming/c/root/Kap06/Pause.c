#include <stdio.h>
int main(void)
{
 int antwort;
 printf("Bitte lesen Sie diese Zeile!\n (Weiter mit der ENTER Taste!)\n");
 getchar();
 printf("Das ist der weitere Text.... (Weiter mit 'J' und der ENTER-Taste!)\n");
 antwort=getchar();
 printf("Die Antwort war %c",antwort);
 getchar();     
 return 0;
}
