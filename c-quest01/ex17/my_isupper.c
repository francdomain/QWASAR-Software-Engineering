#include <stdio.h>
#include <stdlib.h>

/*
**
** QWASAR.IO -- my_isupper
**
** @param {char} param
**
** @return {int}
**
*/

int my_isupper(char param)
{
    if (param >= 65 && param <= 90) {
        return 1;
    }
    return 0;
}