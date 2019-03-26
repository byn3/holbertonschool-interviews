#include "slide_line.h"

#include <stdio.h>


int * remove_copy(const int *in, size_t n, int *out, int value)
{
	for (size_t i = 0; i != n; i++)
		if (in[i] != value) *out++ = in[i];

	return out;
}

/* print debugger 
while (arrayReturn[j])
{
	printf("%i \n", arrayReturn[j]);
	j++;
}
*/

int slide_line(int *line, size_t size, int direction)
{
	size_t i = 0;
	size_t nonZero = 0;
	size_t j = 0;
	int array[size];
	int last = line[size - 1];
	remove_copy(line, size, array, 0);
	
	for (i = 0; i < size; i++)
		if (line[i] != 0)
			nonZero++;
	i = 0;
	/* GO LEFT. IZQUIERDA. append the filtered array and combine */
	if (direction < 0)
	{
		while(i < nonZero - 1)
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
