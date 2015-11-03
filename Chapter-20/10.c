#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct stock{
    char symbol[5];
    int quantity;
    float price;
    struct stock *next;
    };

    struct stock *first;
    struct stock *current;
    struct stock *new;

    first=(struct stock *)malloc(sizeof(struct stock));

    if(first==NULL)
    {
        puts("Some kind of malloc() error");
        exit(1);
    }

    current=first;
    strcpy(current->symbol,"GOOG");
    current->quantity=100;
    current->price=801.19;
    current->next=NULL;

    new=(struct stock *)malloc(sizeof(struct stock));
    if(new==NULL)
    {
        puts("This again...");
        exit(1);
    }

    current->next=new;
    current=new;
    strcpy(current->symbol,"MSFT");
    current->quantity=100;
    current->price=28.77;
    current->next=NULL;

    puts("Investment Portfolio");
    printf("Symbol\tShares\tPrice\tValue\n");
    current=first;
    printf("%-6s\t%5d\t%.2f\t%.2f\n", current->symbol,current->quantity,current->price,current->quantity*current->price);
    current=current->next;
    printf("%-6s\t%5d\t%.2f\t%.2f\n", current->symbol,current->quantity,current->price,current->quantity*current->price);

    return(0);

    }
