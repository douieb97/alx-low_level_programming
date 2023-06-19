#include <stdio.h>
/**
 * main - Entry point
 * Description: Your Description Here
 * Return: Always 0 (Success)
 */
int main(void)
{
	int start;

	start = 0;

	while (start <= 9)
	{
		putchar('0' + start);
		if (start != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar('\n');
		start++;
	}
	return (0);
}
