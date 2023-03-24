#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

void swap_ints(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

/*
**
** QWASAR.IO -- my_is_sort
**
** @param {integer_array*} arr
**
** @return {bool}
**
*/
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

bool my_is_sort(integer_array* arr)
{
    int i, len = arr->size;
	bool sorted = false;

	if (arr->array == NULL || len == 0) {
        sorted = true;
		return sorted;
    }

	while (sorted == false)
	{
		sorted = true;
		for (i = 0; i < len - 1; i++)
		{
			if (arr->array[i] > arr->array[i + 1])
			{
                swap_ints(arr->array + i, (arr->array + i + 1));
				sorted = true;
                return sorted;
			}
            else if (arr->array[i] < arr->array[i + 1]) {
                swap_ints(arr->array + i, arr->array + i + 1);
				sorted = false;
                return sorted;
            }
            else {
                sorted = true;
                return sorted;
            }
		}
		len--;
	}
    sorted = false;
    return sorted;
}
