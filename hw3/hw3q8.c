#include <stdio.h>
#include <string.h>
int main()
{
    char stnce[20],reverse[20];
    int i=0,length=0,count;
    printf("enter a string\n");
    scanf("%s",stnce);
    length=strlen(stnce);
    count=length;
    for(i=0;i<length;i++)
    {
        reverse[i]=stnce[count-1];
        count--;
    }
    printf("%s\r\n",stnce);
    printf("%s\r\n",reverse);
    return 0;
}