#include <stdio>

int main(void)
{
  char f, m, l;
  int age;

  printf("Enter yor names and age: ");
  scanf("%c %c %c %d", &f, &m, &l, &age);
  printf("My names are: %c %c %c and my age is:  %d.\n", f, m, l, age);
  return(0);
}
