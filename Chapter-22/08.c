#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *handle;
    int highscore[5];
    int x;

    handle=fopen("scores.dat","w");
    if(handle==NULL)
    {
        puts("Unable to open file");
        exit(1);
    }

    printf("WHat is your high score for: ");

    for(x=0;x<5;x++)
    {
        printf("Player: %d \t",x+1);
        scanf("%d",&highscore[x]);
    }
    fwrite(&highscore,sizeof(int)*5,5,handle);
    fclose(handle);
    puts("Score saved.");

    return(0);


}
