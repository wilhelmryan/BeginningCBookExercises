#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    char *temp;
    int a,b,x;

    for(a=0;a<6;a++)
        for(b=a+1;b<7;b++)
            if(strcmp(*(fruit+a),*(fruit+b))==1)
            {
                temp = *(fruit+a);
                *(fruit+a) = *(fruit+b);
                *(fruit+b) = temp;
            }

    for(x=0;x<7;x++)
        puts(fruit[x]);

    return(0);
}
