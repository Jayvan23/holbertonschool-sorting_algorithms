#include "sort.h"
#include <stdio.h>

/**
 * print_array - Prints the elements of an array
 * @array: The array to print
 * @size: The size of the array
 */
void print_array(int *array, size_t size)
{
    size_t i;

    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("\n");
}
