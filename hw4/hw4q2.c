#include <stdio.h>
int factorial (int num);
int main()
{
    int num1,fact;
    printf("enter a number");
    scanf("%d",&num1);
    fact= factorial(num1);
    printf("the factorial id %d",fact);
    return 0;
}

int factorial (int num)
{
    if(num==1)
        return num;
    return num*factorial(num-1);    
}