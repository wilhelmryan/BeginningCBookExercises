#include <stdio.h>

int main()
{
    char alphabet[27];
    int x;
    char *pa;

    pa = alphabet;      /* initialize pointer */

/* Fill array */
    for(x=0;x<26;x++)
    {
        *pa++=x+'A';
    }

    pa = alphabet;

/* Display array */
    for(x=0;x<26;x++)
    {
        putchar((*pa)++);
    }
    putchar('\n');

    return(0);
}
