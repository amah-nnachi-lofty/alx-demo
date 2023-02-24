#include <stdio.h>

int main(void)
{
  char name[20];
  int age;

  printf("Enter yor name: ");
  fgets(name, sizeof(name), stdin); // fgets(name, sizeof(name), stdlin); // fgets function read string
  printf("Enter your age: ");
  scanf("%d", &age);
  printf("My name is: %s and my age is:  %d\n", name, age);

  getchar();
  return(0);
  }
