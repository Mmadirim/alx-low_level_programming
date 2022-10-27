#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int i;
	int h;

	for (i = 0; i < n; i++)
	{
		n--;
		h = a[i];
		a[i] = a[n];
		a[n] = h;
	}
}
