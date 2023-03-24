#include <stdio.h>

/*
**
** QWASAR.IO -- my_string_index
**
** @param {char*} haystack
** @param {char} needle
**
** @return {int}
**
*/

int my_string_index(char* haystack, char needle)
{
    int i;
    i = 0;

    while (haystack[i] != '\0') {
        if (haystack[i] == needle) {
            return i;
        }
        i++;
    }
    return -1;
}