#include "stdio.h"
#include "math.h"
int main()
{
    int n;
    scanf("%d",&n);
    int count = 0;
    int bas = 2;
    int i;
    for(i = 3; i <= n; i++)
    {
        int flag = 1;
        int j;
        for(j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            if(i - bas == 2)
            {
                count++;
            }
            bas = i;
        }
    }
    printf("%d",count);
    return 0;
}
