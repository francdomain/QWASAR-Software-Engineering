#include <stdio.h>
#include <string.h>

/*
**
** QWASAR.IO -- my_strcmp
**
** @param {char*} s1
** @param {char*} s2
**
** @return {int}
**
*/

int my_strcmp(char* s1, char* s2)
{
    int i = 0;

     while (s1[i] == s2[i]) {
         if (s1[i] == '\0' || s2[i] == '\0') {
            break;
         }
        i++;
     }
    
     if (s1[i] == '\0' && s2[i] == '\0') {
         return 0;
     }
     else if (s1[i] > s2[i]) {
         return 1;
     }
     return -1;

}