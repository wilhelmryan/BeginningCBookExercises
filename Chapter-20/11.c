#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ITEMS 5

    struct stock{
    char symbol[5];
    int quantity;
    float price;
    struct stock *next;
    };
    struct stock *first;
    struct stock *current;
    struct stock *new;

    struct stock *make_structure(void);
    void fill_structure(struct stock *a,int c);
    void show_structure(struct stock *a);

    int main()
{
    int x;

    for(x=0;x<ITEMS;x++)
    {
        if(x==0)
        {
            first=make_structure();
            current=first;
        }
        else
        {
          new=make_structure();
          current->next=new;
          current=new;
        }
        fill_structure(current,x+1);
    }
    current->next=NULL;

    puts("Investment Portfolio");
    printf("Symbol\tShares\tPrice\tValue\n");
    current=first;
    while(current)
    {
        show_structure(current);
        current=current->next;
    }
    return(0);
}

struct stock *make_structure(void)
{
    struct stock *a;
    a=(struct stock *)malloc(sizeof(struct stock));
    if(a==NULL)
    {
        puts("There was a problem");
        exit(1);
    }
    return(a);
}

void fill_structure(struct stock *a,int c)
{
    printf("Item #%d/%d: \n",c,ITEMS);
    printf("Stock Symbol: ");
    scanf("%s",a->symbol);
    printf("Number of shares: ");
    scanf("%d",&a->quantity);
    printf("Price: ");
    scanf("%f",&a->price);
}

void show_structure(struct stock *a)
{
    printf("%-6s\t%5d\t%.2f\t%.2f\n",a->symbol,a->quantity,a->price,a->quantity*a->price);
}
