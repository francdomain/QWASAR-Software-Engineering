# Welcome to Quest04
***

## Task
0. Create a function my_range which returns a malloc'd array of integers. This integer array should contain all values between min and max.
1. Reproduce the behavior of strdup from man strdup.
2. Create a function that displays the content of an array of strings. One word per line.
3. Create a function my_count_on_it that receives a string array as a parameter and returns an array with the length of each string.
You have to allocate for the struct AND then allocate for the array inside. Don't forget to set the size
4. Create a function that combines an array of strings from separator characters.
5. You must create a function that takes in a flight path of a rocket ship as a string of letters and returns the following format:
"{x: X, y: Y, direction: 'DIRECTION'}". 
X,Y represent the ending coordinates of your ship and direction represents its final direction.
Note:
Function my_spaceship returns a STRING.
All spaceships will start at 0,0 and will face up
Moving left/right will influence X and moving up/down will influence Y
You can use snprintf.

## Description
0. Min included - max excluded.
If min value is greater or equal to max's value, a null pointer should be returned.
Don't worry about "free", it will be done in our main().


1. Let's allocate a string (or array of characters).
We have the string: "abc" and we want a copy in a new part of memory that you will have to malloc.
Don't worry about free, it will be done in our main().


2.Each word will be followed by a newline, including the last one.
You can't use printf, time to reuse your my_putstr function.


3. Count the size of each elements in an array.

4. You will receive two parameters, an array with all the strings and a separator.
The function should return a string where all the strings from the array are joined with the separator.


5. You have been recently been hired by SpacePro, a new rocket manufacturer, and have been tasked with designing a simulator for their spaceships. 
This simulator creates a virtual “space” and keeps track of the basic movements and direction of a given ship. 
Your job is to keep track of where the ship is and it’s orientation relative to its starting point.
Instructions
Your ship simulator must take in a string of letters that represent a planned flight path for a given rocket ship.
In a ship’s flight path there are only 3 valid options for movement; R for turning right, L for turning left and A for advancing.
If, for example, you receive “RRALAA” as your flight path, you should interpret it as the following:
Turn right, turn right, advance, turn left, advance, advance
Once given this initial flight path, your program must return the x,y coordinates of a ship’s final destination as well as it’s orientation relative to the starting point.
Orientation is represented as left, right, up or down.
Space is infinite, so the x,y coordinates you return could be placed on a seemingly infinite grid and can be negative or positive values.
So let's say an upward-facing rocket ship leaves its starting point of 0,0 and is given the flight path of “RRALAA”, its final location will be 2,-1 and it will be facing right.

## Installation
The project can be installed by using make.

## Usage
1. It can be used as a simulator to keep track of movement and direction of a moving ship.
2. It can also be used to count the amount of words in a given statement.
```
./my_project argument1 argument2
```

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
