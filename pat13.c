#include "stdio.h"
#include "math.h"
int isprime(int a);
int main()
{
    int m,n;
    int a[10001];
    if(m<n<=10000)
    {
       scanf("%d %d",&m,&n);
    }
    int i=1;
    int j=0;
    int count=0;
    do
    {
        i++;
        if(isprime(i))
        {
            a[j]=i;
            j++;
        }

    }while(j<n);
    for(i=m-1;i<n;i++)
    {
        count++;
        if(count%10==0) {printf("%d\n",a[i]);}
        else if(i==n-1) {printf("%d",a[i]);}
        else {printf("%d ",a[i]);}
    }
    return 0;
}
int isprime(int a)
{
    int i;
    int isprime=1;
    for(i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            isprime=0;
                break;
        }
    }
    return isprime;



}
