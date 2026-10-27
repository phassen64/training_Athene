#include <stdio.h>
int main(void)
{
  int i;
  struct person
  {
    char name[30];
    int nummer;
  };
  struct person student;
  printf ("Bitte geben Sie die Studiennummer ein: ");
  scanf("%d",&student.nummer);
  printf("Bitte geben Sie den Namen ein (Ende mit Leertaste):\n");
  i = 0;
  do
  {
    student.name[i] = (char) getchar ();
    i++;
  }
  while (student.name[i-1] !=32 );    /*Ende mit Leertaste*/
    printf("Kontrollausdruck:\n");
  printf("Studentennummer: %d\n", student.nummer);
  printf("Name: ");
  i = 0;
  do
  {
    printf("%c", student.name[i]);
    i++;
  }
  while(student.name[i] != 32);   /*Auslesen bis Leertaste*/
  fflush(stdin);
  getchar();
  return 0;
}