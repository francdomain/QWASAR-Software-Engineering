/*
**
** QWASAR.IO -- my_isalpha
**
** @param {char} param
**
** @return {int}
**
*/

int my_isalpha(char param)
{
    if ((param >= 97 && param <= 122) || (param >= 65 && param <= 90)) {
        return 1;
    }
    return 0;
}