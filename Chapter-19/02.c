#include <stdio.h>

int main()
{
    int array [5]={1,2,3,4,5};

    printf("'Array' is at address %p\n",&array);
    printf("'Array' is at address %p\n",array);
    return(0);
}
