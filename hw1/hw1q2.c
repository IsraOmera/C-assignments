#include <stdio.h>
int main ()
{
    char a;
    printf("enter a letter:");
    scanf("%c",&a);
    switch (a)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'o':
        case 'O':
        case 'i':
        case 'I':
        case 'u':
        case 'U':
        {printf("%c is a vowel",a);}
        break;
        default:
        {printf("%c is consonant",a);}
        break;
    }
    return 0;
}