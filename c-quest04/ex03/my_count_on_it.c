#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif


#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


integer_array* my_count_on_it(string_array* arr)
{
    integer_array *p;

    p = (integer_array *)malloc(sizeof(integer_array));
    p->size = arr->size;
    
    p->array = (int*)malloc(p->size * sizeof(int));

    for (int i = 0; i < arr->size; i++) {
        p->array[i] = strlen(arr->array[i]);
    }
    return p;
}
