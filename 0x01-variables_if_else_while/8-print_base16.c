#include <stdio.h>
/**
 * main - Entry point
 * Description: Print base 16 numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int start, end;
	char Start, End;

	start = 0;
	end = 9;
	Start = 'a';
	End = 'f';
	while (start <= end)
	{
		putchar('0' + start);
		start++;
	}
	while (Start <= End)
	{
		putchar(Start);
		if (Start == End)
		{
			putchar('\n');
		}
		Start++;
	}

	return (0);
}
