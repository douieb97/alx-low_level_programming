#include <stdio.h>
/**
 * main - Entry point
 * Description: Print numbers from 0 to 9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar('0' + n);
		if (n == 9)
			putchar('\n');
		n++;
	}
	return (0);
}
