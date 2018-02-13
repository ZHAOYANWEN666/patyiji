#include "stdio.h"
int main()
{
    int m;
    int n;
    int flag = 1;
    do{
        scanf("%d %d",&m, &n);
        if(flag)
        {
            if(n != 0)
            {
                printf("%d %d",m * n, n - 1);
                flag = 0;
            }
            else
            {
                break;
            }
        }
        else
        {
            if(n == 0)
            break;
            else
            printf(" %d %d",m * n, n - 1);
        }
    }while(getchar() != '\n');
    if(flag)
    {
        printf("0 0");
    }
    return 0;
}
