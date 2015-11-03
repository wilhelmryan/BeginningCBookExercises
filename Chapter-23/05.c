#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

int main()
{
    char curdir[255];

    getcwd(curdir,255);
    printf("Current director is %s\n",curdir);
    if(mkdir("very_temporary")==-1)
        exit(1);
    else
    {
        mkdir("very_temporary");
    }
    puts("New directory created");
    if(chdir("very_temporary")==-1)
        exit(1);
    else(chdir("very_temporary"));
    getcwd(curdir,255);
    printf("current directory is %s\n",curdir);
    return(0);

}
