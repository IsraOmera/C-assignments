#include <stdio.h>
int main()
{
    int size,num,loc=0,i;
    int arr[20];
    printf("enter number of elements: ");
    scanf("%d",&size);

    for(i=0; i<size; i++)
    {
        printf("enter the element no %d:",i+1);
        scanf("%d",&arr[i]);        
    }
    printf("enter the number you want to find: ");
    scanf("%d",&num);

    for(i=0; i<size; i++)
    {
        if(num==arr[i])
        {
            loc=i+1;
            printf("the location of the element is:%d\n",loc);
        }
    }
    if (loc==0) printf("element not found");
    
     return 0;
}