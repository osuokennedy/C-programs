#include <stdio.h>
/**
*main - starting point of the program
*/
int main (void)
{
int b = 10;
int *p;
 p = &b;

 printf("%d\n", *p);
printf("%d\n", b);
 printf("%p\n", &b);
 printf("%p\n", p);
}
