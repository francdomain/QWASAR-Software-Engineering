# Welcome to Quest02
***

## Task
The objective of this quest is to discover pointers and start to get experience with pointers.

## Description
1. Create a function that takes a pointer to integer as a parameter, and sets the value to 0.
2. Create a function that swaps the value of two integers whose addresses are entered as parameters.
Pointer is a key element here. Remember a pointer is a variable that contains the address of another variable.
3. Reproduce the behavior of the function strlen.
The strlen() function computes the length of the string s.
The strlen() function returns the number of characters.
C Prototype:
size_t my_strlen(const char *s);
4. Create a function that displays a string of characters on the standard output.
The address of the string's first character is in the pointer entered as
parameter in the function.
Remember \0 is the End Of String
To print a character you can use my_putchar
5. Create a my_add function which takes 2 parameters (nbr1 and nbr2) and returns a value.
This value is the result of the addition of nbr1 and nbr2 parameters.
6. Create a my_sub function which takes 2 parameters (nbr1 and nbr2) and returns a value.
This value is the result of the subtraction of nbr1 and nbr2 parameters.
7. Create a my_mult function which takes 2 parameters (nbr1 and nbr2) and returns a value.
This value is the result of the multiplication of nbr1 and nbr2 parameters.
8. Create a my_string_formatting function which takes 3 parameters (firstname, lastname and age) and prints a string composed value.
Formatting should be: "Hello, my name is FIRSTNAME LASTNAME, I'm AGE."
Make sure you are printing a newline.
9. Create a my_string_index function which takes 2 parameters (haystack and needle) and locates the first occurrence of the character needle in the string haystack and returns the position.
You can think of this function as: is there an L (character) in my string "helLo"?
The objective is to build a loop that has an if statement which returns the characters position when it matches the right character.
10. Create a my_upcase function that takes a string as a parameter and returns the uppercase version of it.
11. Create a my_downcase function that takes a string as a parameter and returns the lowercase version of it.

## Installation
The project can be install by using the make

## Usage
Pointers are used to store the memory address of variables or another pointer.
```
./my_project argument1 argument2
```

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
