#include "main.h"
#include <stdio.h>
/**
 * reverse_array- Reverses the content of an array of interger
 * @a: The array of intergers to be reversed
 * @n: The number of elements in the arrat
 */
void reverse_array(int *a, int n)
{
int tmp, index;
for(index = n-1; index >= n/2; index--)
{
tmp = a[n-1-index];
a[n-1-index] = a[index];
a[index] = tmp;
}
}
