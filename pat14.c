#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int main()
{
    int i;
    const char *week[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
    char a[61],b[61],c[61],d[61];
    scanf("%s",&a[i]);
    scanf("%s",&b[i]);
    scanf("%s",&c[i]);
    scanf("%s",&d[i]);
    int count=0;
    for(i=0;i<61;i++)
    {
        if(a[i]==b[i])
        {
            int x=a[i]-'A';
            printf("%s ",week[x]);
            count++;
        }
        if(count == 1 && a[i] >= '0' && a[i] <= '9' )
        {
            if(a[i] == b[i])
            {
                printf("0%d:",a[i] - '0');
                break;
            }
        }
        else if(count == 1 && a[i] >= 'A' && a[i] <= 'N' )
        {
            if(a[i] == b[i])
            {
                printf("%d:",a[i] - 55);
                break;
            }
        }

    }
    for(i=0;i<61;i++)
    {
        if(c[i]==d[i])
        {
            if(i < 10)
                {
                    printf("0%d",i);
                    break;
                }
                else
                {
                    printf("%d",i);
                    break;
                }
        }
    }
    return 0;

}
