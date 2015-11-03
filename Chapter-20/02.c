#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    float *temperature;
    char c;

    temperature = (float *)malloc(sizeof(float)*1);
    if(temperature == NULL)
    {
        puts("Unable to allocate memory");
        exit(1);
    }
    printf("What is the temperature? ");
    scanf("%f",temperature);
    getchar();
    printf("Is that Celsius or Fahrenheit (C/F)? ");
    c = toupper(getchar());
    if(c=='F')
        *temperature=(*temperature+459.67)*(5.0/9.0);
    else
        *temperature+=273.15;
    printf("It's %.1f Kelvin outside.\n",*temperature);

    return(0);
}
