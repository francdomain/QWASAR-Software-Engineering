#include <stdio.h>

/*
**
** QWASAR.IO -- my_strchr
**
** @param {char*} str
** @param {char} c
**
** @return {char*}
**
*/

char* my_strchr(char* str, char c)
{
    while (*str != '\0') {
        if (*str == c) {
            return str;
        }
        else if (*(str + 1) == c) {
            return (str + 1);
        }
        return NULL;
        str++;
    }
    return (str + 1);
}