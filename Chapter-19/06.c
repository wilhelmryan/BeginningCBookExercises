#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10];
    int x;
    int *pn;

    pn=numbers;

    for(x=0;x<10;x++)
    {
        *pn=x+1;
        pn++;
    }


    for(x=0;x<10;x++)
    {
        *pn=x+1;
        printf("numbers[%d] =%d\n",x+1,*pn);
    }

    return(0);
}
