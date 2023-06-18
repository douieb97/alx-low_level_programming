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
		printf("%d", n);
		if (n == 9)
			printf("\n");
		n++;
	}
	return (0);
}
