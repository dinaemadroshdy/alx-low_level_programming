#include <stdio.h>

/**
* main - Entry point
* Desciption: Print all single digit numbers
* of base 10, followed by new line.
* Return: Always 0 (Success)
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	printf("%i", digit);
	putchar('\n');

	return (0);
}
