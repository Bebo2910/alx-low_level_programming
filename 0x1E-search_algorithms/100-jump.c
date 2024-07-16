#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - finding the value faster using the jump search algorithm
 * @array: the array to search in
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index of the value on success, or -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
    size_t i = 0, j = 0, jump = sqrt(size);

    if (!array || size == 0)
        return (-1);

    while (i < size && array[i] < value) {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        i += jump;
    }

    j = i - jump;
    printf("Value found between indexes [%ld] and [%ld]\n", j, i);

    while (j < size && j <= i) {
        printf("Value checked array[%ld] = [%d]\n", j, array[j]);
        if (array[j] == value)
            return (j);
        j++;
    }

    return (-1);
}