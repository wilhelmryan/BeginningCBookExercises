#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    char *day[]={
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"
    };

    time_t tictoc;
    struct tm *today;

    time(&tictoc);
    today=localtime(&tictoc);
    printf("Today is %s, %d/%d/%d",*(day+(today->tm_wday)),today->tm_mon+1,today->tm_mday,today->tm_year+1900);
    return(0);
}
