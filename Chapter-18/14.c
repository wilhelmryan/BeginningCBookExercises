#include <stdio.h>

int main()
{
    int a;
    float b;
    int *apos;
    float *bpos;

    apos=&a;
    *apos=34;
    bpos=&b;
    *bpos=68.4;
    printf("The values are %d and %2.1f.",a,b);

    return(0);
}
