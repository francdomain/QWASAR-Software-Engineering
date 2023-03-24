#include <stdio.h>

/*
**
** QWASAR.IO -- my_strcpy
**
** @param {char*} src
** @param {char*} dst
**
** @return {char*}
**
*/

char* my_strcpy(char* dst, char* src)
{
    int i;

    for (i = 0; src[i] != '\0'; i++) {
        dst[i] = src[i];
    }
    return dst;
}