#include <stdio.h>
#include <unistd.h>

void my_putchar(char c) {
  write(1, &c, 1);
}

/*
**
** QWASAR.IO -- my_print_reverse_alphabet
**
**
** @return {void}
**
*/

void my_print_reverse_alphabet()
{
    int param = 'z';

    while (param >= 'a') {
        my_putchar(param);
        param--;
    }
    my_putchar('\n');
}