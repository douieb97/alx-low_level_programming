#include <stdio.h>

/**
 * main - Entry point
 * Description: Print alphapet characters
 * Return: Always 0 (Success)
 */
int main(void)
{
	char start;
	char end;

	start = 'a';
	end = 'z';
	while (start <= end)
	{
		putchar(start);
		if (start == 'z')
			putchar('\n');
		start++;
	}
	return (0);
}
