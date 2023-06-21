#include "main.h"
/**
 * _isalpha - check character
 * @c: character to check
 * Description: check character if is an alpha
 * Return: 0 (Fail) 1 (Success)
 */
int _isalpha(int c)
{
	int result;

	result = 0;
	if (c >= 'a' && c <= 'z')
		result = 1;
	if (c >= 'A' && c <= 'Z')
		result = 1;
	return (result);
}
