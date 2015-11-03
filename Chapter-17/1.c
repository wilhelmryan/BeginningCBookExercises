#include <stdio.h>

char *binbin(int n);

int main()
{
    int input;

    printf("Type a value 0 to 255: ");
    scanf("%d",&input);
    printf("%d is binary %s\n",input,binbin(input));
    return(0);
}

char *binbin(int n)
{
    static char bin[9];
    int x;

    for(x=0;x<8;x++)
    {
        bin[x] = n & 0x80 ? '1' : '0';
        n <<= 1;
    }
    bin[x] = '\0';
    return(bin);
}
