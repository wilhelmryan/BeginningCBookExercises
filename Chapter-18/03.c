#include <stdio.h>

int main()
{
    char string[]="Does this string make me look fat?";

    printf("The string \"%s\" has a size of %u.\n",string,strlen(string));

    return(0);
}
