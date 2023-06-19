#include <stdio.h>
/**
 * main - Entry point
 * Description: Your Description Here
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f;
	int s;

	f = 0;
	while (f <= 9)
	{
		s = 0;
		while (s <= 9)
		{
			if (f != s && f < s)
			{
				putchar('0' + f);
				putchar('0' + s);
				if (s + f != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			s++;

		}
		f++;
	}
	putchar('\n');
	return (0);
}
