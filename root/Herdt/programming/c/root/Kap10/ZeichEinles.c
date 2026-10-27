#include <stdio.h> 
int main(void)      
{
  char dateiname[] = "Testfgets.txt";
  char inhalt[80] = " ";
  FILE *datei;
  datei = fopen(dateiname, "r");
  if(datei != NULL)
  {
    while (feof(datei) == NULL)
     {
	fgets(inhalt, 45, datei);
        printf("%s", inhalt); 
     }
  fclose(datei);
  }
  getchar();
  return 0;   
}

