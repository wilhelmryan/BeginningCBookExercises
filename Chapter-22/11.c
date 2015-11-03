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

    strcpy(bond.actor,"Sean Connery");
    bond.year=1962;
    strcpy(bond.title,"Doctor No");

    a007=fopen("bond.db","w");
    if(!a007)
    {
        puts("There is no bond here...");
        exit(1);
    }
    fwrite(&bond,sizeof(struct entry),1,a007);
    fclose(a007);
    puts("Record written.");

    return(0);
}
