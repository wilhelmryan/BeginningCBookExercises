#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t tictoc;

    time(&tictoc);
    printf("The current time is now %s",ctime(&tictoc));
    return(0);
}
