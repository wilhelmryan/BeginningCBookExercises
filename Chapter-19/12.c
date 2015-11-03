#include <stdio.h>

int main()
{
   char sample[]="From whence cometh my help?\n";
   char *index;

   index=sample;

   while(*index != '\0')
   {
       putchar(*index);
       index++;
   }
   return(0);
}
