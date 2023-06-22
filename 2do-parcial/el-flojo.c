#include <stdio.h>
#include <string.h>

/* DRIVER */
int
main ()
{
  char palabra[110];
  fgets(palabra,110,stdin);
  palabra[strcspn(palabra,"\n")] = '\0';

  if (strlen(palabra) > 4)
  {
    printf("%c%lu%c\n", palabra[0],strlen(palabra)-2,palabra[strlen(palabra)-1]);
  } else {
    printf("%s\n",palabra);
  }

   
  return 0;
}