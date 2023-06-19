#include <stdio.h>
int main(int argc, char const *argv[])
{
  int M = 0, N = 0;
  scanf("%d", &M);
  getchar();

  for (int i = 0; i < M; i++)
  {
    scanf("%d", &N);
    getchar();
    for (int j = 0; j < N; j++)
    {
      printf("<3");
    }
    printf("\n");
    
  }
   
  return 0;
}