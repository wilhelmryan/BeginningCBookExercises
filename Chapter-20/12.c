/* An interactive linked list program */
/* Dan Gookin, Beginning Programming with C For Dummies */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct typical {
    int value;
    struct typical *next;
};
struct typical *first;
struct typical *current;
struct typical *new;

int menu(void);
void add(void);
void show(void);
void delete(void);
struct typical *create(void);

/* The main function works with input only
   Everything else is handled by a function */
int main()
{
    int choice='\0';    /* get the while loop to spin */
    first=NULL;

    while(choice!='Q')
    {
        choice=menu();
        switch (choice)
        {
            case 'S':
                show();
                break;
            case 'A':
                add();
                break;
            case 'R':
                delete();
                break;
            case 'Q':
                break;
            default:
                break;
        }
    }

    return(0);
}

/* Display the main menu and collect input */
int menu(void)
{
    int ch;

    printf("S)how, A)dd, R)emove, Q)uit: ");
    ch=getchar();
    while(getchar()!='\n')      /* remove excess input */
        ;
    return(toupper(ch));
}

/* Add an item to the end of the linked list */
void add(void)
{
    if(first==NULL)     /* Special case for the first item */
    {
        first=create();
        current=first;
    }
    else                /* find the last item */
    {
        current=first;
        while(current->next)        /* last item == NULL */
            current=current->next;
        new=create();
        current->next=new;          /* update link */
        current=new;
    }
    printf("Type a value: ");
    scanf("%d",&current->value);
    current->next=NULL;
    while(getchar()!='\n')      /* remove excess input */
        ;
}

/* Display all structures in the linked list */
void show(void)
{
    int count=1;

    if(first==NULL)         /* this list is empty */
    {
        puts("Nothing to show");
        return;
    }
    puts("Showing all records:");
    current=first;
    while(current)          /* last record == NULL */
    {
        printf("Record %d: %d\n",count,current->value);
        current=current->next;
        count++;
    }
}

/* Remove a record from the list */
void delete(void)
{
    struct typical *previous;   /* must save previous record */
    int r,c;

    if(first==NULL)         /* check for empty list */
    {
        puts("No records to remove");
        return;
    }
    puts("Choose a record to remove:");
    show();
    printf("Record: ");
    scanf("%d",&r);
    while(getchar()!='\n')      /* remove excess input */
        ;
    c=1;
    current=first;
    previous=NULL;      /* first record has no previous */
    while(c!=r)
    {
        if(current==NULL)   /* ensure that 'r' is in range */
        {
            puts("Record not found");
            return;
        }
        previous=current;
        current=current->next;
        c++;
    }
    if(previous==NULL)      /* Special case for first record */
        first=current->next;
    else                    /* point previous record at next */
        previous->next=current->next;
    printf("Record %d removed.\n",r);
    free(current);          /* release memory */
}

/* Build an empty structure and return its address */
struct typical *create(void)
{
    struct typical *a;

    a=(struct typical *)malloc(sizeof(struct typical));
    if(a==NULL)
    {
        puts("Some kind of malloc() error");
        exit(1);
    }
    return(a);
}
