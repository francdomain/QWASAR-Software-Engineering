# Welcome to Quest03
***

## Task
0. Write a program that takes a string as an argument and returns it reversed.
1. Reproduce the behavior of the function strcmp.
2. Reproduce the behavior of the function strcpy.
3. Reproduce the behavior of the function strncpy.
4. Create a function that searches for the first occurrence of the character c (an unsigned char) in 
   the string pointed to by the argument str.
5. Searches for the last occurrence of the character c (an unsigned char) in the string pointed to by the argument str.
6. Implement strStr().
7. Structures in C are similar to the concept of package.
8. Let's create a function which will tell us if an array is sorted or not.

## Description
0. Your algorithm must be IN PLACE. (What is in place?)
   An in-place algorithm is an algorithm which transforms input using no auxiliary data structure.
1. The strcmp() function compares string1 with string2 to see if there are equals.
2. The strcpy() and strncpy() functions copy the string source (src) to destination (dst).
   The first parameter is the destination and the second parameter is the source.
   The strcpy() and strncpy() functions return destination.
3. Reproduce the behavior of the function strncpy.
4. The terminating null character is considered to be part of the string. 
   The function should return a pointer pointing to the last matching character, or null if no match was found.
5. The terminating null character is considered to be part of the string. 
   Returns a pointer pointing to the last matching character, or null if no match was found.
6. It should return a pointer to the first occurrence of a needle in a haystack, or NULL if the needle is not part of the haystack.
   Clarification:
   What should we return when needle is an empty string? This is a great question to ask during an interview.
   For the purpose of this problem, we will return haystack when needle is an empty string.
   pseudo-code:

    while letter_s1 in s1
    while letter_s2 in s2
        if letter_s1 != letter_s2
        break
    if reach end of s2
        return &s1[index]
    return NULL

7. You can have multiple object inside your package and with a struct you can have multiple variable in it.
   A struct is a type.
   You are defining a struct of type struct s_box which will contains variables.
   A struct has a special behavior if it's a pointer on a struct or not.
   If it's a pointer on a struct, in order to reach the variable you will use ->.
   example:

    struct s_coordinate {
    int x;
    int y;
    }

    int main() {
    struct s_coordinate coord;
    struct s_coordinate* ptr_on_coord = &coord;
    
    ptr_on_coord->x = 0;
    ptr_on_coord->y = 0;
    return 0;
    }
    In this exercise you will receive a struct integer_array.
    You have to print its size and its content following this format: size\narray[0]\narray[1]...
    Iterate throught the variable size to iterate throught the struct.
    If the size is 0, just print 0\n.
    You can use printf() to print.

8. Write a function that takes an integer array as a parameter (input) and returns a boolean (true/false).
   Your function should return true if the integer array is sorted in either ASC(ascending) or DESC(descending) order.
   Your function should return false if the integer array is not sorted.
   Numbers will be from -2_000_000 to 2_000_000
   The array might have duplicates.
   Curious about the integer_array type?

    typedef struct s_integer_array {
    int size;
    int* array;
    } integer_array;

    integer_array_variable->size
    will give you the size of the array
    integer_array_variable->array
    will give you the access to the array

    integer_array_variable->array[0]
    => is the first cell of the array

    Please do not define the struct in your code when sending to gandalf.

## Installation
The project in installed by the use of make re.

## Usage
The project is applied to chess, maps, strings, matrices, and other 2D environments.
The project can be used for sorting algorithm.
The project is used to as part of the algorithm for search engines to search for words.
```
./my_project argument1 argument2
```

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
