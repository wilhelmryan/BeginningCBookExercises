#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct entry{
    char actor[32];
    int year;
    char title[32];
    };

    struct entry bond;
    FILE *a007;

    a007=fopen("bond.db","r");
    if(!a007)
    {
        puts("Unable to access file");
        exit(1);
    }
    fseek(a007,sizeof(struct entry)*1,SEEK_SET);
    fread(&bond,sizeof(struct entry),1,a007);

    printf("%s\t%d\t%s",bond.actor,bond.year,bond.title);
    fclose(a007);
    return(0);
}
