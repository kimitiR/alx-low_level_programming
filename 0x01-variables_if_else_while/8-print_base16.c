#include <stdio.h>

/**
* main - Print the alphabet in lowercase letters in reverse
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (letter = 'a'; letter < 'g'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
