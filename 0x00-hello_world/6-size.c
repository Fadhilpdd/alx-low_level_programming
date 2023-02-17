#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("Size of a char: %lu byte($)", sizeof(char));
	printf("Size of int: %lu byte($)", sizeof(int));
	printf("Size of a long int: %lu byte($)", sizeof(long int));
	printf("Size of a long lng int: %lu byte($)", sizeof(long long int));
	printf("Size of float: %lu byte($)", sizeof(float));
	return (0);
}
