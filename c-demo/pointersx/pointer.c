#include <stdio.h>

int main()

{
	int x; // normal variable declaration of type int
	int *ptr; // declaration of a pointer => pointer is an address of a variable
	x = 5;  // assign value of 5 to x
	ptr = &x; // prints address of x

	printf("x is : %d\n", x); // print the value of x
	printf("The memory address of x is: %p\n", ptr); // print the memory address where x is located

	// Pointer => get the variable of variable memory address
	printf("Value at the ponter address is: %d\n", *ptr); // vlaue at the address of ptr(&x)
	return 0;

// The output of the program
// x is : 5
// The memory address of x is: 000000000060FE14
// Value at the ponter address is: 5
}
