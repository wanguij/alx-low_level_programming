#include "main.h"
/**
 * swap_int - check the code
 *
 *   @a: pointer value to swap
 *   @b: pointer value to swap
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
