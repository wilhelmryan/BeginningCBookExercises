#include <stdio.h>
#define lizard 6

int main()
{
    int poofy[lizard]={1,2,3,4,5,6};
    int pos=0;

    for(pos;pos<lizard;pos++)
    {
        printf("%d is at %p\n",poofy[pos],&poofy[pos]);

    }
    return(0);
}
