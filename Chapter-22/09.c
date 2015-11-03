#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *handle;
    int highscore[5];
    int x;

    handle=fopen("scores.dat","r");
    if(!handle)
    {
        puts("Unable to access file");
    }
    fread(highscore,sizeof(int)*5,5,handle);
    fclose(handle);
    for(x=0;x<5;x++)
    {
        printf("High score for player %d is %d\n",x+1,highscore[x]);
    }
    return(0);
}
