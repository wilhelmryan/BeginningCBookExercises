#include <stdio.h>

char *binbin(int n);

int main()
{
    int bshift,x;

    printf("Type a value from 0-65535: ");
    scanf("%d",&bshift);

    for(x=0;x<8;x++)
    {
        printf("%s\t %d\n",binbin(bshift),bshift);
        bshift=bshift<<1;
    }
    return(0);
}

char *binbin(int n)
{
    static char bin[17];
    int x;

    for(x=0;x<16;x++)
    {
        bin[x] = n & 0x80000 ? '1' : '0';
        n <<= 1;
    }
    bin[x] = '\0';
    return(bin);
}
