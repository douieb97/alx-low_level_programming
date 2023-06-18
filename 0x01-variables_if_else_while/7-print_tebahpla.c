#include <stdio.h>
/**
 * main - Entry point
 * Description: Print alphabet in reverse order
 * Return: Always 0 (Success)
 */
int main(void)
{
	char start, end;

	start = 'z';
	end = 'a';
	while (start >= end)
	{
		putchar(start);
		if (start == end)
		{
			putchar('\n');
		}
		start--;
	}
	return (0);
}
