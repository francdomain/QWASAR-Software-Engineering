#include <stdio.h>

/*
**
** QWASAR.IO -- my_upcase
**
** @param {char*} str
**
** @return {char*}
**
*/

char* my_upcase(char* str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return str;
}