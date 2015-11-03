#include <stdio.h>
#include <ctype.h>

int main()
{
    char input[64];
    char ch;
    int x = 0;

    printf("Type in some text: ");
    fgets(input,63,stdin);

    while(input[x] != '\n')
    {
        if(isalpha(input[x]))
            ch = input[x] & 223;
        else
            ch = input[x];
        putchar(ch);
        x++;
    }
    putchar('\n');

    return(0);
}
