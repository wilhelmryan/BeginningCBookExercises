#include <stdio.h>
#include <time.h>

int main()
{
    int x;
    time_t tictoc;
    time_t flipflop;

for(x=0;x<10000000;x++)
{
    time(&tictoc);
    printf("The time is now %ld\n",tictoc);
}
    time(&flipflop);
    printf("The time is NOW %ld\n",flipflop);
    printf("Meaning that took %ld somethings",flipflop-tictoc);
    return(0);
}
