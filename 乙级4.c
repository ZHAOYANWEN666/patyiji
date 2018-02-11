#include "stdio.h"
#include "string.h"
int main()
{
    int n,i;
    scanf("%d",&n);
    struct mation
{
    char name[11];
    char number[11];
    int score;
};
struct mation smation[n];

    for(i=0;i<n;i++)
    {
        scanf("%s %s %d",&smation[i].name,&smation[i].number,&smation[i].score);
    }
    int max;
    for(i=0;i<n-1;i++)
    {
        int flag1;
        if (smation[i].score>smation[i+1].score)
        {
           max=i;
        }
    }
    int min;
    for(i=0;i<n-1;i++)
    {
        if (smation[i].score<smation[i+1].score)
        {
           min=i;
        }

    }
    printf("%s %s",smation[max].name,smation[max].number);
    printf("\n%s %s",smation[min].name,smation[min].number);
    return 0;

}
