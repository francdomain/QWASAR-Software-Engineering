#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void my_putchar(char c) {
  write(1, &c, 1);
}

/*
**
** QWASAR.IO -- my_print_alphabet
**
**
** @return {void}
**
*/

void my_print_alphabet()
{
    int param = 'a';

    while (param <= 'z') {
        my_putchar(param );
        param++;
    }
    my_putchar('\n');
}