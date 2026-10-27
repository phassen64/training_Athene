#include <stdio.h>
int main(void)
{
  int tag;
  printf("Der wievielte Tag der Woche ist heute?\t");
  scanf("%d", &tag);
  switch(tag)
  {
    case 1:
    case 3:
    case 5: 
	printf("Heute ist Montag, Mittwoch oder Freitag! \n"); 
	break;
    case 2:
    case 4: 
	printf("Heute ist Dienstag oder Donnerstag! \n"); 
	break;
    case 6:
    case 7: 
	printf("Heute ist Wochenende! \n"); 
	break;
    default: 
	printf("Diesen Tag haben Sie gerade erfunden!\n"); 
	break;
  }
  fflush(stdin);
  getchar();
  return 0;
}
  


   
