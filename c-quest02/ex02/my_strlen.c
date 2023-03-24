#include <stdio.h>
#include <string.h>

/*
**
** QWASAR.IO -- my_strlen
**
** @param {char*} s
**
** @return {int}
**
*/

int my_strlen(char* s)
{
    int i = 0;

    while (s[i] != '\0') {
        i++;
    }
    return i;
}