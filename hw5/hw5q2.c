#include <stdio.h>
struct Slength
{
    int feet;
    float inches;
};
struct Slength getlength(char name[])
{
    struct Slength var1;
    printf("enter information for %s distance\n",name);
    printf("enter feet: ");
    scanf("%d",&var1.feet);
    printf("enter inches: ");
    scanf("%f",&var1.inches);
    
    return var1;
}
void printlength (struct Slength variable)
{
    printf("%d'-%1f''\n",variable.feet,variable.inches);
}

struct Slength addlength(struct Slength var1,struct Slength var2)
{
    struct Slength var3;
    var3.feet = var1.feet+var2.feet;
    var3.inches = var1.inches+var2.inches;
    if (var3.inches>12)
    {
        var3.feet++;
        var3.inches-=12;
    }
    return var3;
}
int main()
{
    
    struct Slength first,second,result;
    first = getlength("1st");
    second = getlength("2nd");
    result=addlength(first,second);
    printf("the sum of the variables:");
    printlength(result);
}
