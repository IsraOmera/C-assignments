#include <stdio.h>
int main()
{
    char stnce[20];
    int i=0,length=0;
    printf("enter a string\n");
    scanf("%s",stnce);
    while(stnce[i]!=0)
    {
        length++;
        i++;
    }
    printf("%d",length);
    return 0;
}