#include <stdio.h>

int main(void)
{

  int i;
  double d;
  char c;

  printf("The size of the int is: %lu.\n", (unsigned long)sizeof(i));
  printf("The size of the double is: %lu.\n", (unsigned long)sizeof(d));
  printf("The size of the char is: %lu.\n", (unsigned long)sizeof(c));

  return(0);
}
