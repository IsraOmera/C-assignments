#include <stdio.h>
int main()
{
    int i;
    printf("enter a number\n");
    scanf("%d",&i);
    if(i>0)
    { printf("%d is a postive number",i);}
    else if (i==0)
    {printf("%d is zero",i);}
    else
    {printf("%d is a negative number",i);}
    return 0;
}