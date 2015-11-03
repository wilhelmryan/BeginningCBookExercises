#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t tictoc;
    struct tm *today;

    time(&tictoc);
    today=localtime(&tictoc);
    //printf("Today is %d:%d:%d\n",today->tm_hour,today->tm_min,today->tm_sec);

    //PM measurement
    if(today->tm_hour>12)
    {
        printf("It is %d:%d:%d PM\n",today->tm_hour-12,today->tm_min,today->tm_sec);
    }
    else if(today->tm_hour<12)
    {
        printf("It is %d:%d:%d AM\n",today->tm_hour,today->tm_min,today->tm_sec);
    }
    else
    {
        puts("something has gone wrong with the universe");
        exit(1);
    }

    return(0);
}
