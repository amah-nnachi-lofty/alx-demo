#include <stdio.h>

// arrays program to display the address of memory storage location
int main()
{
	int arr[5] = {2,4,6,7,10};

	printf("The memory address of index 0 is: %p\n", &(arr[0]));
	printf("The memory address of index 1 is: %p\n", &(arr[1]));
	printf("The memory address of index 2 is: %p\n", &(arr[2]));
	printf("The memory address of index 3 is: %p\n", &(arr[3]));
	printf("The memory address of index 4 is: %p\n", &(arr[4]));

	return(0);
}


