# Welcome to My Ngram
***

## Task
Write a program my_ngram; It will count the number of occurrences per character.

NAME: my_ngram
SYNOPSIS: my_ngram text [text2, text3]

## Description
In computational linguistics and probability, an n-gram is a contiguous sequence of n items from a given sample of text or speech. 
The items can be phonemes, syllables, letters, words or base pairs according to the application. 
The n-grams typically are collected from a text or speech corpus. When the items are words, n-grams may also be called shingles.
Google Inc. has used this technique to improve the completion of its Search Engine. The program was developed by Jon Orwant and Will Brockman and released in mid-December 2010.
My Ngram will take 1 or multiple strings as arguments.
It will display, one per line, each character and the numbers of times it appears. Order will be alphanumerical.

Technical information:
You must create a Makefile, and the output is the command itself
You can use:
printf(3)
write(2)
You can NOT use:
Any functions/syscalls which does not appear in the previous list
Yes, it includes exit
Multiline macros are forbidden
Include another .c is forbidden
Macros with logic (while/if/variables/...) are forbidden

Requirements:
Your code must be compiled with the flags -Wall -Wextra -Werror.
Your makefile must have a clean & fclean rules.

Example of some rules for Makefiles:

all : $(TARGET)

$(TARGET) : $(OBJ)
	gcc $(CFLAGS) -o $(TARGET) $(OBJ) 

$(OBJ) : $(SRC)
	gcc $(CFLAGS) -c $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(TARGET)

re: fclean all

Warnings:
It's a bad practice to submit "object/binary files". Gandalf will reject your project if you submit your binary. 
(with the following message: "pushed file wrong format")
Ganfalf issue:
Gandalf is sending an extra '"', please add a if != from '"' in order to pass the project.


## Installation
The project can be installed by using the command make

## Usage
The project can be used to count the number of occurrence of a letter in a text or speech corpus.
```
./my_ngram argument1 argument2
```

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
