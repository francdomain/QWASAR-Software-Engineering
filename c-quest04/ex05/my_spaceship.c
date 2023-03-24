#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
**
** QWASAR.IO -- my_spaceship
**
** @param {char*} flightPath
**
** @return {char*}
**
*/

#define FORMAT_STRING "{x: %i, y: %i, direction: '%s'}" 

#ifndef STRUCT_DIRECTION
#define STRUCT_DIRECTION
struct direction
{
    char* Up;
    char* Down;
    char* Left;
    char* Right; 
};
#endif

char* my_spaceship(char* flightPath)
{
    struct direction direct;
    direct.Up = "up";
    direct.Down = "down";
    direct.Left = "left";
    direct.Right = "right";

    int i;
    int X = 0, Y = 0; 
    char* buffer;
    char *currentDirection;
    currentDirection = direct.Up;
    buffer = malloc(200);

    for (i = 0; i < strlen(flightPath); i++) {
        if (flightPath[i] == 'R') {
            if(currentDirection == direct.Up){
                currentDirection = direct.Right;
            } else if(currentDirection == direct.Right) {
                currentDirection = direct.Down;
            } else if(currentDirection == direct.Down) {
                currentDirection = direct.Left;
            } else if(currentDirection == direct.Left) {
                currentDirection = direct.Up;
            }
        }
        else if (flightPath[i] == 'A') {
            if(currentDirection == direct.Up) {
                Y -= 1;
            } else if(currentDirection == direct.Right) {
                X += 1;
            } else if(currentDirection == direct.Down) {
                Y += 1;
            } else if(currentDirection == direct.Left) {
                X -= 1;
            }
        }
        else if (flightPath[i] == 'L') {
            if(currentDirection == direct.Up) {
                currentDirection = direct.Left;
            } else if(currentDirection == direct.Left) {
                currentDirection = direct.Down;
            } else if(currentDirection == direct.Down) {
                currentDirection = direct.Right;
            } else if(currentDirection == direct.Right) {
                currentDirection = direct.Up;
            }
        }
    }
    snprintf(buffer, 128, FORMAT_STRING, X, Y, currentDirection);
    return buffer;
}
