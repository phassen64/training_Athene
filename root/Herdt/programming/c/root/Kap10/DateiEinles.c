#include <stdio.h> 
int main(void)      
{
  char dateiname[] = "Test.txt";
  char inhalt[80] = " ";
  FILE *datei;
  datei = fopen(dateiname, "r");
  if(datei != NULL)
  {
    fscanf(datei, "%s", inhalt);
    printf("%s", inhalt); 
    fclose(datei);
  }
  getchar();
  return 0;   
}