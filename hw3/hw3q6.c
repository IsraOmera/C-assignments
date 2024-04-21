#include <stdio.h>
#include <string.h>
int main()
{
    char letter, stnce[20];
    int frequency=0;
    printf("enter a string\n");
    scanf("%s",stnce);
    printf("enter a letter to find its frequency:\n");
    scanf("%s",&letter);

    for (int i=0;i<20;i++)
    {
        if(letter == stnce[i]) frequency++;

    }
    printf("the frequency of the leeter you entered is: %d",frequency);
    return 0;
}