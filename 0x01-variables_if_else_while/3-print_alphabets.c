#include <stdio.h>
/**
 * main - Entry point
 * Description: Print Alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	char start;
	char end;
	char Start;
	char End;

	start = 'a';
	end = 'z';
	Start = 'A';
	End = 'Z';

	while (start <= end)
	{
		putchar(start);
		start++;
	}

	while (Start <= End)
	{
		putchar(Start);
		Start++;
		if (Start > End)
		{
			putchar('\n');
		}
	}
	return (0);
}
