#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all alphabets exept e and q
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
		if (start != 'e' && start != 'q')
		{
			putchar(start);
			if (start == end)
				putchar('\n');
		}
		start++;
	}
	return (0);
}
