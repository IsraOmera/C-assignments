#include <stdio.h>

int main()
{
    int arr[15],n,i, *p;
    printf("Enter the number of elements to store in the array (max15):");
    scanf("%d",&n);
    printf("input 5 elements of the array:\n");
    for(i=0;i<n;i++)
    {
        printf("element-%d:",i+1);
        scanf("%d",&arr[i]);
        printf("\n");
    }
    p=arr+(n-1);
   
  printf("the elements of array in reverse order are:\n");
   
  for(i=n;i>0;i--)
    {
        printf("element-%d:%d\n",i,*p--);
        
    }
    
    return 0;
}