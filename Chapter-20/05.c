#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *input;
    char *buffer;
    char *a; char*b;

    input=(char *)malloc(sizeof(char)*1024);
    buffer=(char *)malloc(sizeof(char)*1024);
    if(input==NULL || buffer==NULL)
    {
        printf("Unable to allocate memory! OH NO!");
        exit(1);
    }

    puts("Type something long and boring: ");
    fgets(input,1023,stdin);

    puts("\n\nCopying buffers...");

    a=input; b=buffer;
    while(*a!='\n')
    {
        *b++=*a++;
    }

    puts("You wrote...:");
    printf("\"%s\"\n",input);
    puts("And the duplicate: ");
    printf("\"%s\"\n",buffer);
    return(0);
}
