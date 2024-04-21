#include <stdio.h>
int isprime (int num);
int main()
{
    int num1,num2;
    printf("enter two numbers");
    scanf("%d %d",&num1,&num2);
    printf("the prime numbers between %d and %d are:",num1,num2);

    for (int i=num1+1; i<num2; i++)
    {
        if(isprime(i)==1)
        printf("%d ",i);
    }
    return 0;
}

int isprime(int num)
{
    for(int i=num-1; i>1; i--)
    {
        if(num%i == 0)
        return 0;
    }
    return 1;
}