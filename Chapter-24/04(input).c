#include "ex2404.h"

void fillstructure(void)
{
    human person;

    printf("Enter your name: ");
    fgets(person.name,31,stdin);
    printf("What's your age? ");
    scanf("%d",&person.age);
}
