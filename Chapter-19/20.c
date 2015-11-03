#include <stdio.h>

int main()
{
    char *fruit[] = {
        "watermelon",
        "banana",
        "pear",
        "apple",
        "coconut",
        "grape",
        "blueberry"
    };
    int x,a;

    for(x=0;x<7;x++)
    {
        a=0;
        while(putchar(*(*(fruit+x)+a++)))
            ;
        putchar('\n');
    }

    return(0);
}
