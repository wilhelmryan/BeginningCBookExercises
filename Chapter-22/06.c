#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *handle;
    int highscore;

    handle=fopen("scores.dat","w");
    if(handle==NULL)
    {
        puts("Unable to open file");
        exit(1);
    }

    printf("WHat is your high score: ");
    scanf("%d",&highscore);
    fprintf(handle,"%d",highscore);
    fclose(handle);
    puts("Score saved.");

    return(0);


}
