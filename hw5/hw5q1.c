#include <stdio.h>
struct Sstudent
{
    char name[50];
    int rollnumber;
    int marks;
};
struct Sstudent getStudent()
{
    struct Sstudent student1;
    printf("enter students information \n");
    printf("enter students name :");
    scanf("%s",student1.name);
    printf("enter students roll number: ");
    scanf("%d",&student1.rollnumber);
    printf("enter students mark: ");
    scanf("%d",&student1.marks);
    
    return student1;
}
void printStudent (struct Sstudent student)
{
    printf("\ndisplaying information\n");
    printf("name : %s\n",student.name);
    printf("roll number : %d\n",student.rollnumber);
    printf("mark : %d\n",student.marks);
    
}

int main()
{
    struct Sstudent student;
    student=getStudent();
    printStudent(student);
}
