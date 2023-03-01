#include <stdio.h>

int main()
{
  FILE *pF = fopen("test.txt", "r");
  char buffer [500];
  fgets(buffer, 500, pF);
  printf("%s", buffer);
    
  fclose(pF);
  return (0);
}
