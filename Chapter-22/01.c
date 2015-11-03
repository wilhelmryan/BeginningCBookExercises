#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fh;

    fh=fopen("hello.txt","w");
    if(fh==NULL)
    {
        puts("can't open that file");
        exit(1);
    }
    fprintf(fh,"Look what I made");
    fclose(fh);
    return(0);
}
