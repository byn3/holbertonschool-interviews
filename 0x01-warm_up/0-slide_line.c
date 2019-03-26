#include "slide_line.h"

#include <stdio.h>

/**
* remove_copy - gets all values minus the zeros.
* @in: original array
* @n: size of array
* @out: return new array
* @value: the value we want to filter
*
* Return: the new array with filtered out zeros
*/
int *remove_copy(const int *in, size_t n, int *out, int value)
{
	size_t i = 0;
	for (; i != n; i++)
		if (in[i] != value)
			*out++ = in[i];
	return (out);
}

/**
* slide_line - the thing that does things
* @line: the line of things that we need to act on
* @size: the size of line
* @direction: the direction of the movement
*
* Return: 1 or 0
*/

int slide_line(int *line, size_t size, int direction)
{
	size_t i = 0;
	size_t nonZero = 0;
	size_t j = 0;
	int array[200];
	int last = line[size - 1];

	remove_copy(line, size, array, 0);
	for (i = 0; i < size; i++)
		if (line[i] != 0)
			nonZero++;
	i = 0;
	/* GO LEFT. IZQUIERDA. append the filtered array and combine */
	if (direction < 0)
	{
		while (i < nonZero - 1)
		{
			if (array[i] == array[i + 1])
			{
				line[j] = array[i] + array[i];
				i++;
			}
			else
				line[j] = array[i];
			i++;
			j++;
		}
		line[j] = last;
		for (j++; j < size; j++)
			line[j] = 0;
	}
	/* DERECHO DEERECHOOOOO */
	else if (direction > 0)
		printf("heheh im also in");
	else
		return (0);
	return (1);
}
