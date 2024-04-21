#include <stdio.h>
int main()
{
    int rows,columns;
    int arr[100][100];
    int transpose[100][100];

    printf("enter the number of rows:\t");
    scanf("%d",&rows);
    printf("enter the number of columns:\t");
    scanf("%d",&columns);
    printf("enter the elements of the matrix\n");

    while(rows>100 || columns>100)
    {
        printf("enter a number smaller than 100\n");
        scanf("%d%d",&rows,&columns);
    }
    for(int i=0;i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            printf("enter a number\t");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrix elements\n");
    for(int i=0;i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("transpose elements\n");
    for(int i=0;i<columns; i++)
    {
        for(int j=0; j<rows; j++)
        {
            transpose[i][j]=arr[j][i];
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
