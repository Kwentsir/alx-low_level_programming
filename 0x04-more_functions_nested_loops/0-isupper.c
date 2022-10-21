#include "main.h"
#include <stdio.h>

/**
 *
 *  * _isupper - checks if the letter is uppercase
 *
 *   * @c: interger to be checked
 *
 *    * Return: Always return 0.
 *
 *     */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
