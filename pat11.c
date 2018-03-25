#include "stdio.h"
int main()
{
    int t;
    scanf("%d",&t);
    int count=1;
    struct number
    {
        int a;
        int b;
        int c;
    };
    struct number vev[11];
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d",&vev[i].a,&vev[i].b,&vev[i].c);
    }
    for(int i=0;i<t;i++)
    {

        if(vev[i].a+vev[i].b>vev[i].c)
        {
            printf("Case #%d: true\n",count);
        }
        else
        {
            printf("Case #%d: false\n ",count);
        }
        count++;
    }
    return 0;
}
