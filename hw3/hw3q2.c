#include <stdio.h>
int main()
{
    int num;
    float arr[100],sum,avg;
    printf("enter the number of data:");
    scanf("%d",&num);

    for(int i=0; i<num; i++)
    {
        if(num>100)
        {
            printf("enter a number smaller than 100\n");
            break;
        }
        printf("enter a number:");
        scanf("%f",&arr[i]);
        sum +=arr[i];
    }
    avg=sum/num;
    printf("the average is: %f",avg);

    return 0;
}