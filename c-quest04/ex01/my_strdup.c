#include <stdlib.h>

/*
**
** QWASAR.IO -- my_strdup
**
** @param {char*} param_1
**
** @return {char*}
**
*/

char* my_strdup(char* str)
{
    int i = 1, j = 0;
    char *sdup;

    if (str == NULL) {
        return NULL;
    }
    while (str[i]) {
        i++;
    }

    sdup = malloc(sizeof(*sdup) * i + 1);
    if (sdup == NULL) {
        return NULL;
    }
    while (j < i) {
        sdup[j] = str[j];
        j++;
    }
    sdup[j] = '\0';

    return sdup;
}