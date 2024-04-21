#include <stdio.h>
struct complex 
{
  float real;
  float imaginary;
};

struct complex getComplex (char name[10])
{
    struct complex var;
    printf("for the %s complex number\n ",name);
    printf("enter the real and imaginary parts respectively :");
    scanf("%f%f",&var.real,&var.imaginary);
    return var;
}
struct complex addComplex(struct complex var1,struct complex var2)
{
    struct complex var3;
    var3.real=var1.real+var2.real;
    var3.imaginary=var1.imaginary+var2.imaginary;
    return var3;
}
void printComplex (struct complex var)
{
    printf("%2f+%2fi",var.real,var.imaginary);
}
int main()
{
    struct complex var1,var2,var3;
    var1=getComplex("1st");
    var2=getComplex("2nd");
    var3=addComplex(var1,var2);
    printf("sum = ");
    printComplex(var3);
    return 0;
}