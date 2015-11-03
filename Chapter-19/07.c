#include <stdio.h>

int main()
{
    char alphabet[27];
    int x;
    int y;
    char *pn;

    pn=alphabet;

    for(x=0;x<26;x++)
    {
        *pn=x+'A';
        pn++;
    }
    pn=alphabet;

    for(y=0;y<26;y++)
    {
        putchar(*pn);
        pn++;
    }
    putchar('\n');

    return(0);
}
