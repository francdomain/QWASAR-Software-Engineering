#include <stdio.h>

/*
**
** QWASAR.IO -- my_downcase
**
** @param {char*} str
**
** @return {char*}
**
*/

char* my_downcase(char* str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
}