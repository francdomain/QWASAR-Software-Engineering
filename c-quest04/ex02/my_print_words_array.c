#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_putchar(char c) {
  return write(1, &c, 1);
}

/*
** QWASAR.IO -- my_putstr
**
** @param {char*} str
**
** @return {void}
**
*/

void my_putstr(char* str)
{
    int i;
    i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}

/*
** QWASAR.IO -- my_print_words_array
**
** @param {string_array*} arr
**
** @return {void}
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


void my_print_words_array(string_array* arr)
{
    int i;

    for (i = 0; i < arr->size; i++) {
        my_putstr(arr->array[i]);
        my_putstr("\n");
    }
}