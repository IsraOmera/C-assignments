#include <stdio.h>
struct Sstudent
{
    char name[50];
    int rollnumber;
    int marks;
};
struct Sstudent getStudent(int roll)
{
    struct Sstudent student1;
    student1.rollnumber=roll;
    printf("for roll number %d:\n",roll);
    printf("enter students name :");
    scanf("%s",student1.name);
    printf("enter students mark: ");
    scanf("%d",&student1.marks);
    
    return student1;
}
void printStudent (struct Sstudent student,int roll)
{
    printf("information for roll number %d:\n",roll);
    printf("name : %s\n",student.name);
    printf("mark : %d\n",student.marks);
    
}

int main()
{
    struct Sstudent student[3];
    printf("enter students information \n");
    for(int i=0;i<3;i++)
    {
        student[i]=getStudent(i+1);
    }
    printf("\ndisplaying information\n");
    for(int i=0;i<3;i++)
    {
        printStudent(student[i],i+1);
    }
}
