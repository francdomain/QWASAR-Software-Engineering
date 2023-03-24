#include <stdio.h>
#include <stdlib.h>

/*
**
** QWASAR.IO -- my_isspace
**
** @param {char} param
**
** @return {int}
**
*/

int my_isspace(char param)
{
    if (param == 32) {
        return 1;
    }
    return 0;
}