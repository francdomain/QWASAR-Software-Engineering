#include <stdlib.h>

/*
**
** QWASAR.IO -- my_range
**
** @param {int} min
** @param {int} max
**
** @return {int*}
**
*/

int* my_range(int min, int max)
{
    int i, size;
    int *array;

    if (min >= max) {
        return NULL;
    }

    size = max - min;
    array = malloc(sizeof(int) * size);

    if (array == NULL) {
        return NULL;
    }

    for (i = 0; i < size; i++) {
        array[i] = min++;
    }
    return array;
}