#include <stdio.h>

/**
* main - Entry point
* Description: Print the alphabet in lowercase letters in reverse
* Return: Always 0 (Success)
*/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);

	putchar('\n');

	return (0);
}
