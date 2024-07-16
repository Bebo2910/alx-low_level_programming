#include "search_algos.h"
#include <math.h>

/**
 * jump_search - finding the value faster using good technique
 * @array: the array
 * @size: the size
 * @value: the value required
 * Return: the index on sucess
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j = 0, jump = sqrt(size);

	do {
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i += jump;
	} while (array[i] < value && i < size);
    if (i < jump) {
        i = jump;
        }
    printf("Values found between indexex [%ld] and [%ld]\n", i - jump, i);
    for (j = i - 3; j <= i && j < size; j++)
    {
        printf("Value checked array[%ld] = [%d]\n", j, array[j]);
        if (array[j] == value) return (j);
    }

	return (-1);
}
