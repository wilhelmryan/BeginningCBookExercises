#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void create(int *a);
void show(int *b);

int main()
{
    int holder[10];
    int *pos;
    pos=holder;
    create(pos);
    show(pos);
}

void create(int *a)
{
    int x,r;
    srand((unsigned)time(NULL));
    for(x=0;x<10;x++)
    {
        r=rand();
        r%=10;
        *a=r;
        a++;
    }
}

void show(int *b)
{
    int x;
    for(x=0;x<10;x++)
    {
        printf("The value at position %d is %d\n",x+1,*b++);
    }
}
