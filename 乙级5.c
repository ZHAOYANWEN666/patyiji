#include "stdio.h"
#include "string.h"
int main()
{
  int i,n,j;
  scanf("%d",&n);
  int a[n];
  int b[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    b[i]=a[i];
  }
  for(i=0;i<n;i++)
  {
  while(a[i]>1)
  {
    if(a[i]%2==0)
    {
      a[i]=a[i]/2;
    }
    else{a[i]=(3*a[i]+1)/2;}
    for(j=0;j<n;j++)
    {
      if(b[j]==a[i])
      {
        b[j]=0;
      }
    }
  }
  }
  for(int i = 1;i < n;i++)
        {
                for(j = i;j>0 && b[j]>b[j -1];j--)
                {
                        int t = b[j];
                        b[j] = b[j -1];
                        b[j -1] = t;
                }
        }
        for( i=0;i<n && b[i]!=0;i++)
        {
                if(i == 0)
                        printf("%d",b[i]);
                else
                        printf(" %d",b[i]);
        }
        printf("\n");

        return 0;
}
