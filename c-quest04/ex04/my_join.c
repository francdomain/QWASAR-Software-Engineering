#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
**
** QWASAR.IO -- my_join
**
** @param {string_array*} arr
** @param {char*} sep
**
** @return {char*}
**
*/
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

char* my_join(string_array* arr, char* sep)
{
    int i;

    if (arr->size == 0) {
        return NULL;
    }

    int length = strlen(sep);
    for (i = 0; i < arr->size; i++) {
        length += strlen(arr->array[i]);
    }

    char *str = malloc(sizeof(char) * length);
    strcpy(str, arr->array[0]);

    for (i = 1; i < arr->size; i++) {
        strcat(str, sep);
        strcat(str, arr->array[i]);
    } 
    return str;
}