#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t tictoc;
    struct tm *today;

    time(&tictoc);
    today=localtime(&tictoc);
    printf("Today is %d/%d/%d\n",today->tm_mon+1,today->tm_mday,today->tm_year+1900);
    return(0);
}
