#include <stdio.h>
#include <string.h>
struct Semployee
{
    char name[20];
    int id;
};
int main()
{
    struct Semployee employee;
    struct Semployee *array_poin;
    int i;
    array_poin=&employee;
    int **point=&array_poin;
    
    
    strcpy(employee.name,"ali");
    employee.id=45;
    // for(i=0;i<1;i++)
    // {
    //     array_poin[i]=&employee[i];
    //     printf("\nenter employee%d name:",i);
    //     scanf("%s",&employee[i].name);
    //     printf("\nenter employee%d id:",i);
    //     scanf("%d",&employee[i].id);
    // }
    
    
    // for(i=0;i<3;i++)
    // {   
    //     printf("employee%d name:%s\n",i,array_poin[0]->name); 
    //     printf("employee%d id:%d\n",i,array_poin[0]->id);
    // }
    
    printf("%d\n",*point->id);
    printf("%x\n",&array_poin);
    printf("%d\n",array_poin->id);
    printf("%x\n",&employee);
    
    
    
    return 0;
}