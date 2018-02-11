#include<stdio.h>

char * output[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
void trans(int);
int main(void)
{
        char ch;
        int sum = 0;
        while((ch = getchar()) != '\n')
        {
                sum += ch -'0';
        }

        if(sum <10)
                printf("%s",output[sum]);
        else
        {
                trans(sum);
                putchar('\n');
        }

        return 0;
}

void trans(int sum)
{
        int i=0,j,t;
        int a[i];
        while(sum!=0)
        {
           j=sum%10;
           a[i]=j;
           sum=sum/10;
           i++;
        }
        i=i+1;
        a[i]=sum;
        for(t=i;t>-1;t--)
        {
            printf("%s",output[a[t]]);
        }

}
