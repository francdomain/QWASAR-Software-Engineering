#include <stdio.h>

/*
**
** QWASAR.IO -- my_strncpy
**
** @param {char*} param_1
** @param {char*} param_2
** @param {int} param_3
**
** @return {char*}
**
*/

char* my_strncpy(char* dst, char* src, int n)
{
    int i;
    int tmp;

    for (i = 0; i < n; i++) {
        tmp = src[i];
        src[i] = dst[i];
        dst[i] = tmp;
    }
    return dst;
}