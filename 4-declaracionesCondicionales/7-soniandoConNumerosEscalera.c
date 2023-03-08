#include <stdio.h>
int main(int argc, char const *argv[])
{
  int N = 0, A = 0, B = 0;
  
  scanf("%d %d %d",&N,&A,&B);

  if ( (N==1) || (N==121) ||
       (N==12321) || (N==1234321) || 
       (N==1234321) || (N==123454321) )
  {
    printf("es escalera inicialmente");
  } else {

      N = (N - A) / (B + 1);

      if ( (N==1) || (N==121) ||
        (N==12321) || (N==1234321) || 
        (N==1234321) || (N==123454321) )
      {
        printf("es escalera despues del primer intento");
      } else {
        N = N - (A + B) + 1;
        if ( (N==1) || (N==121) ||
        (N==12321) || (N==1234321) || 
        (N==1234321) || (N==123454321) )
      {
        printf("es escalera despues del segundo intento");
      } else {
        printf("nos rendimos");
      }
    }
  }
  
  return 0;
}
