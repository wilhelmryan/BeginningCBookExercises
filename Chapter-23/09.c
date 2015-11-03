#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    if(unlink("wambooli")==-1)
    {
        puts("Unable to delete file");
        exit(1);
    }
    puts("File killed");
    return(0);
}
