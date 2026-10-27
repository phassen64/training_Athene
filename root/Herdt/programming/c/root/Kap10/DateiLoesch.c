#include <stdio.h> 
int main(void)      
{
 char dateiname[] = "Test1.txt";
 if(remove(dateiname) == 0) 
  printf("Datei geloescht!");
 else 
  printf("Datei konnte nicht geloescht werden.");
 getchar();
 return 0;   
}

 