#include "stdio.h"
#include "string.h"
int main()
{
    char array[81];
    gets(array);
    char * p;
    int i;
    for(i = strlen(array) - 1; i >= 0; i--,i = strlen(array) - 1)
    {

        p = strrchr(array,' ');
        if(!p)
        {
            printf("%s",array);
            break;
        }
        *p = '\0';
        p++;
        printf("%s ",p);
    }
    return 0;
}
