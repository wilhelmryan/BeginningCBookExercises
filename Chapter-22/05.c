#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fh;
    char buffer[64];

    fh=fopen("hello.txt","a");
    if(fh==NULL)
    {
        puts("Unable to access that file");
        exit(1);
    }

    fprintf(fh,"This text was added on later\n");
/*
    while(fgets(buffer,64,fh))
    {
        printf("%s",buffer);
    }
    */
    fclose(fh);
    return(0);
}
