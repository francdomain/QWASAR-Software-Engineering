#include <stdio.h>
#include <string.h>

/*
**
** QWASAR.IO -- my_strrchr
**
** @param {char*} param_1
** @param {char} param_2
**
** @return {char*}
**
*/

char* my_strrchr(char* str, char c)
{
    int i, last;
    last = -1;

    for (i = 0; i < strlen(str); i++) 
    {
        if (str[i] == c) {
            last = i;
        }
    }
    if (last == -1) {
        return NULL;
    } 
    return (str + last);
}
