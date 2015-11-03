#include <stdio.h>
#include <stdlib.h>

void fillstructure(void);
void printstructure(void);

struct thing {
char name[32];
int age;
};

typedef struct thing human;
