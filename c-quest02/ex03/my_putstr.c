#include <stdio.h>
#include <unistd.h>

int my_putchar(char c) {
  return write(1, &c, 1);
}

/*
**
** QWASAR.IO -- my_putstr
**
** @param {char*} str
**
** @return {void}
**
*/

void my_putstr(char* str)
{
    int i;
    i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}