#include <stdio.h>

int main()
{
    char c= 'c';
    int i=123;
    float f=98.6;
    double d=6.022E23;

    printf("char\t%u\n",sizeof(c));
    printf("int\t%u\n",sizeof(i));
    printf("float \t%u\n",sizeof(f));
    printf("double \t%u\n",sizeof(d));
    return(0);
}
