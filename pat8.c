#include "stdio.h"
#include "stdlib.h"
int main()
{
  int N = 0;
  int M = 0;
  scanf("%d %d",&N,&M);
  int a[201] = {0};
  int i ;
  M = M % N;
  for (i = 0; i < N ; i++)
  {
       scanf("%d",&a[i]);
       a[N + i] = a[i] ;
  }
  for(i = N - M ; i < 2*N - M ; i++)
  {
      printf("%d",a[i]);
      if(i != 2 * N - M - 1)
      printf(" ");
  }
  return 0;
}
