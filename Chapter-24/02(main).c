#include <stdio.h>
#include <stdlib.h>

int count;

void second(void);

int main()
{
    for(count=0;count<5;count++)
        second();
    return(0);
}
