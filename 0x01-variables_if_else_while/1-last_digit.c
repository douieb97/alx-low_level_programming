#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Check last degist in a number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digist;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digist = n % 10;
	if (last_digist > 5)
	  printf("Last digit of %d is %d and is greater than 5\n", n, last_digist);
	else if (last_digist < 6 && last_digist != 0)
	  printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digist);
	else
	  printf("Last digit of %d is %d and is 0\n", n, last_digist);
	return (0);
}
