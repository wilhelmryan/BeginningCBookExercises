#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fh;
    int ch;

    fh=fopen("hello.txt","r");
    if(fh==NULL)
    {
        puts("Unable to open file");
        exit(1);
    }
    while((ch=fgetc(fh))!=EOF)
        putchar(ch);
    fclose(fh);
    return(0);
}
