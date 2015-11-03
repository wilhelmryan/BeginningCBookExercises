#include <stdio.h>

int main()
{
    char *sample = "From whence cometh my help?\n";
    char *save;

    save = sample;

    while(putchar(*sample++))
        ;
    sample = save;
    puts(sample);
    return(0);
}

