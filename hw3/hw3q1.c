#include <stdio.h>
int main()
{
    int a[2][2];
    int b[2][2];

    printf("enter all elements of 1st matrix\n");

    for(int i=0;i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("enter a %d %d\t",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter all elements of 2nd matrix\n");
    for(int i=0;i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("enter b %d %d\t",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("the sum matrix is\n");
    for(int i=0;i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    return 0;
}