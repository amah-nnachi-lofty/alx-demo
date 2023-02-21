#include <stdio.h>

int main(void)
{
  char f, m, l;
  int age;

  printf("Enter yor name initials and age: ");
  scanf("%c %c %c %d", &f, &m, &l, &age);
  printf("My name initials are: %c %c %c and my age is:  %d.\n", f, m, l, age);
  return(0);
}
