#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *input;

    input=(char *)malloc(sizeof(char)*1024);
    if(input==NULL)
    {
        printf("Unable to allocate memory! OH NO!");
        exit(1);
    }

    puts("Type something long and boring: ");
    fgets(input,1023,stdin);
    puts("You wrote...:");
    printf("\"%s\"\n",input);

    return(0);
}
