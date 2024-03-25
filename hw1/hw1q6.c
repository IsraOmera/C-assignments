#include <stdio.h>
int main()
{
    int c,sum=0;
    printf("enter a number\n");
    scanf("%d",&c);
    for(int i=1; i<=c; i++)
    { sum += i;}
    printf("the sum is %d",sum);
    return 0;
}