#include <stdio.h>
#include <stdlib.h>

/*
**
** QWASAR.IO -- my_first_struct
**
** @param {integer_array*} arr
**
** @return {void}
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


void my_first_struct(integer_array* arr)
{
    int len = arr->size;

    printf("%i\n", len);

    for(int i = 0; i < len; i++){
        printf("%i\n", arr-> array[i]); 
    }
}