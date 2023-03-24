#include <stdio.h>

/*
**
** QWASAR.IO -- my_swap
**
** @param {int*} param_1
** @param {int*} param_2
**
** @return {void}
**
*/

void my_swap(int* param_1, int* param_2)
{
    int tmp;

    tmp = *param_1;
    *param_1 = *param_2;
    *param_2 = tmp;
}