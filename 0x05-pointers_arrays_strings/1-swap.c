#include "main.h"

/*
 *swap_int-function to swap values of two integers
 *@a: pointer value to swap
 *@b: pointer value to swap
 * Return: (0)
 *
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
