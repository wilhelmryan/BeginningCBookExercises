#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *input;
    int len;

    input=(char *)malloc(sizeof(char)*1024);
    if(input==NULL)
    {
        printf("unable to allocate memory");
        exit(1);
    }

    puts("Type something long and boring: ");
    fgets(input,1023,stdin);
    len=strlen(input);
    if(realloc(input,sizeof(char)*(len+1))==NULL)
    {
        puts("unable to reallocate memory");
        exit(1);
    }
    puts("Memory reallocated...");
    printf("You typed...%s",input);

    return(0);
}
