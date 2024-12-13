#include <stdio.h>
#include "sort.h"

void print_array(int *array, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("\n");
}
