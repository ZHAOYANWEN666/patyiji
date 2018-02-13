#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int main()
{
    int number;
    scanf("%d",&number);
    int b,s,n;
    b=number/100;
    s=number%100/10;
    n=number-100*b-10*s;
    int i;
    for(i=0;i<b;i++)
    {
        printf("B");
    }
    for(i=0;i<s;i++)
    {
        printf("S");
    }
    for(i=0;i<n;i++)
    {
        printf("%d",i+1);
    }
    return 0;




}
