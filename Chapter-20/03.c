#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numbers;
    int x;

    numbers=(int *)malloc(sizeof(int)*3);

    if(numbers==NULL)
    {
        puts("Unable to allocate memory");
        return(1);
    }
    *numbers=100;
    *(numbers+1)=200;
    *(numbers+2)=300;

    for(x=0;x<3;x++)
    {
        printf("The value at %d is %d\n",x+1,*numbers++);
    }
    return(0);
}
