#include "stdio.h"
#include "string.h"
#include "stdlib.h"
int main()
{
  int n;
  char str[100];
  int i,j;
  scanf("%d",&n);
  int *flag = (int*)calloc(n,n*sizeof(int));
  for(i=0;i<n;i++)
  {
    scanf("%s",str);
    int countp=0;
    int counta=0;
    int countt=0;
    int posp=0;
    int post=0;
    flag[i]=1;
    for(j=0;j<strlen(str);j++)
    {

      if(str[j]=='P')
            {
                countp++;
                posp = j;
            }
            if(str[j]=='A')
            {
                counta++;
            }
            if(str[j]=='T')
            {
                countt++;
                post = j;
            }
    }
    if( countp+counta+countt != strlen(str)
            || posp+1>=post
            || countp>1
            || countt>1
            || posp*(post-posp-1)!=strlen(str)-post-1)
            {flag[i]=0;}

  }
  for(i=0;i<n;i++)
    {

        if(flag[i]==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;


}
