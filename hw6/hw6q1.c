#include <stdio.h>

int main()
{
    int m;
    int* ab;
    m=29;
    printf("adress of m:%x\n", &m);
    printf("value of m:%d\n", m);
    
    ab =&m;
    
    printf("now ab is assigned with the value of adress m \n");
    printf("adress of pointer ab:%x\n",ab);
    printf("content of pointer ab:%d\n",*ab);
    
    m=34;
    printf("the value of m:%d\n",m);
    printf("adress of pointer ab:%x\n",ab);
    printf("content of pointer ab:%d\n",*ab);
    
    *ab=7;
    printf("the variable pointer ab is assigned with the value %d now\n",*ab);
    printf("adress of m:%x\n",&m);
    printf("value of m:%d\n",m);

    return 0;
}