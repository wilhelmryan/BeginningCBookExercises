#include "ex2403.h"

human person;

int main()
{
    fillstructure();
    printstructure();
    return(0);
}

void fillstructure(void)
{
    printf("Enter your name: ");
    fgets(person.name,31,stdin);
    printf("What's your age? ");
    scanf("%d",&person.age);
}

void printstructure(void)
{
    printf("You are %s and you are %d years old.",person.name,person.age);
}
