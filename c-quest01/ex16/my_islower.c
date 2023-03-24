#include <stdio.h>
#include <stdlib.h>

/*
**
** QWASAR.IO -- my_islower
**
** @param {char} param
**
** @return {int}
**
*/

int my_islower(char param)
{
    if (param >= 97 && param <= 122) {
        return 1;
    }
    return 0;
}