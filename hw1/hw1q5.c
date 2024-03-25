#include <stdio.h>
int main()
{
    char c;
    printf("enter a character\n");
    scanf("%c",&c);
    if((c>='A'&& c<='Z')||(c>='a'&& c<='z'))
        printf("%c is in the alphabet",c);
    else
        printf("%c is not in the alphabet",c);
    return 0;
}