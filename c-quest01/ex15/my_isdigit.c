#include <stdio.h>
#include <ctype.h>

/*
**
** QWASAR.IO -- my_isdigit
**
** @param {char} param
**
** @return {int}
**
*/

int my_isdigit(char param)
{
    if (isdigit(param)) {
        return 1;
    }
    return 0;
}