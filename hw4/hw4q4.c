#include <stdio.h>
int powerii (int num, int power);
int main()
{
    int num1,power,result;
    printf("enter a number and its power");
    scanf("%d%d",&num1,&power);
    result =powerii(num1,power);
    printf("the result is %d",result);
    return 0;
}

int powerii(int num,int power)
{
    if(power==1)
        return num;
    return num*powerii(num,power-1);
}