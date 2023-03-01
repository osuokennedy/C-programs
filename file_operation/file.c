#include <stdio.h>

int main()
{
FILE *pF = fopen("test.txt", "a");
 fprintf(pF, "\nI am from Kenya");
fclose(pF);
return(0);
}
