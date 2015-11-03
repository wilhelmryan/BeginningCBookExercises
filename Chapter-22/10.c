#include <stdio.h>
#include <stdlib.h>

int main()
{
    char filename[255];
    FILE *dumpme;
    int x,c;

    printf("File to dump: ");
    scanf("%s",filename);
    dumpme=fopen(filename,"r");
    if(!dumpme)
    {
        puts("Unable to access file");
        exit(1);
    }
    x=0;
    while((c=fgetc(dumpme))!=EOF)
    {
        printf("%02X ",c);
        x++;
        if(!(x%16))
            putchar('\n');
    }
    putchar('\n');
    fclose(dumpme);
    return(0);
}
