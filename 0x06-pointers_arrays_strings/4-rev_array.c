#include "main.h"

/**
 * reverse_array - a function that reverses the
 *                  content of an array of integers
 * @a: pointer to int array
 * @n: number of elements to swap
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp, b, l;

	b = 0;
	l = n - 1
		/**
		 * set value in array a in temp
		 * then place last array in
		 * the first array the place
		 * value in temp to last array
		 */
		while (b < l)
		{
			temp = a[b];
			a[b] = a[l];
			a[l] = temp;
			a++;
			l--;
		}
}
