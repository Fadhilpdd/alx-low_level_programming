#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("Size of a char: %lu byte($\n)", sizeof(char));
	printf("Size of an int: %lu byte($)\n", sizeof(int));
	printf("Size of a long int: %lu byte($)\n", sizeof(long int));
	printf("Size of a long lng int: %lu byte($\n)", sizeof(long long int));
	printf("Size of a  float: %lu byte($)\n", sizeof(float));
	return (0);
}
