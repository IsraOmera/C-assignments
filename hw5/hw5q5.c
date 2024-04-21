#include <stdio.h>
const float pi=3.14;
#define area(r) printf("area = %f",pi*r*r)
int main()
{
    float radius;
    printf("enter the radius:");
    scanf("%f",&radius);
    area(radius);

    return 0;
}

//size of union=32
//size of structure=40