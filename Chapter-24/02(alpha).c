#include <stdio.h>

extern int count;

void second(void)
{
    printf("%d\n",count+1);
}
