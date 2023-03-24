#include <stdio.h>
#include <string.h>

/*
**
** QWASAR.IO -- reverse_string
**
** @param {char*} str
**
** @return {char*}
**
*/

char* reverse_string(char* str)
{
    int len =  strlen(str) - 1;
    int i;
    char tmp;

    for (i = 0; i < len; i++) {
        tmp = str[i];
        str[i] = str[len];
        str[len--] = tmp;
    }
    return str;
}