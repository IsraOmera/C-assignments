#include <stdio.h>
#include<string.h>

int main()
{
    char word[20], *p;
    printf("enter a string\n");
    scanf("%s",word);
    int length = strlen(word);
    p= word+(length-1);
    int i;
    for(i=0;i<length;i++)
    {
        printf("%c",*p--);
    }
   
    
    return 0;
}