#include "search_algos.h"

/**
* binary_search_helper - searches for a value in an array of ints
* @array: an array we are given
* @left: the left boundary of the array
* @right: the left boundary of the array
* @value: the numebr we are searching
*
* Return: -1 if not found or the index of found
*/

int binary_search_helper(int *array, size_t left, size_t right, int value)
{
	unsigned int i = left;
	size_t mid = (right - left) / 2 + left;

	printf("Searching in array:");

	while (i <= right)
	{
		printf(" %d", array[i]);
		if (i < right)
			printf(",");
		i++;
	}

	printf("\n");

	/* if given one element array and that does not contain the value... */
	if (left == right && value != array[left])
		return (-1);
	/* check if middle is value, if not go left or right */
	else if (array[mid] == value)
		return (mid);
	/* if the value smaller than middle value, recursion left half */
	if (array[mid] > value)
		return (binary_search_helper(array, left, mid, value));
	/* ELSE recursion to the right */
	return (binary_search_helper(array, mid + 1, right, value));
}

/**
* binary_search - searches for a value in an array of ints
* @array: an array we are given
* @size: a size of the array
* @value: the numebr we are searching
*
* Return: -1 if not found or the index of found
*/


int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (binary_search_helper(array, 0, size - 1, value));
}
