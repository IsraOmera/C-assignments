#include <stdio.h>
int main()
{
    int size,num,loc,i;
    int arr[20];
    printf("enter number of elements: ");
    scanf("%d",&size);

    for(i=0; i<size; i++)
    {
        printf("enter the element no %d:",i);
        scanf("%d",&arr[i]);        
    }
    printf("enter the number you want to add: ");
    scanf("%d",&num);
    printf("enter the location: ");
    scanf("%d",&loc);

    for(i=size; i>=loc; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[loc-1]=num;

    for(i=0;i<=size;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}