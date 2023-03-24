# Welcome to Quest05
***

## Task
0. Write a command line that counts and displays the number of regular files and directories in the current directory and all its sub-directories.
1. In a file called my_clean place the command line that will search for all files - in the current directory as well as in its sub-directories - 
with a name ending by ~, or a name that start and end by #
2. Write a command line that searches for all file names that end with ".sh" (without quotation marks) in the current directory and all its sub-directories. 
It should display only the name of files without the extension .sh
3. Create a file my_patch, so that:
$>diff a my_patch > sw.diff

## Description
0. Write a command line that counts and displays the number of regular files and directories in the current directory and all its sub-directories. 
It should include ".", the starting directory.
Example:
$>./my_count_files | cat -e
13$
$>
1. The command line will print and delete all files found. Only one command is allowed: no ; or && or other gitaneries.
2. Write a command line that searches for all file names that end with ".sh" (without quotation marks) in the current directory and all its sub-directories. 
It should display only the name of files without the extension .sh.
Example:
$>./my_find_sh | cat -e
file1$
file2$
file3$
$>
3. Patch transform a file origin to a fixed file applying the transformation or you can called it patch.
Use the patch command to apply the patch on file a from the diff sw.diff.
$>cat a
STARWARS
Episode IV, A NEW HOPE It is a period of civil war.

Rebel spaceships, striking from a hidden base, have won their first victory against the evil Galactic Empire.
During the battle, Rebel spies managed to steal secret plans to the Empire's ultimate weapon, the DEATH STAR,
an armored space station with enough power to destroy an entire planet.

Pursued by the Empire's sinister agents, Princess Leia races home aboard her starship, custodian of the stolen plans that can save her people and restore freedom to the galaxy...
$>

$>cat sw.diff
1,2c1,8
< STARWARS
< Episode IV, A NEW HOPE It is a period of civil war.
---
> Episode V, A NEW H0PE It is a period of civil war
> Rebel spaceships, striking from a hidden base, have won their first victory against the evil Galactic Empire. 
> During the battle, Rebel spies managed to steal secret plans to the Empire's ultimate weapon, the STAR DEATH, an armored space station with enough power to destroy an entire planet.
> 
> 
> Pursued by the Empire's sinister agents,
> Princess Mehdi races home aboard her starship, custodian of the stolen plans that can save her people and restore the dictatorship to the galaxie..
> 
4,6d9
< Rebel spaceships, striking from a hidden base, have won their first victory against the evil Galactic Empire.
< During the battle, Rebel spies managed to steal secret plans to the Empire's ultimate weapon, the DEATH STAR,
< an armored space station with enough power to destroy an entire planet.
8d10
< Pursued by the Empire's sinister agents, Princess Leia races home aboard her starship, custodian of the stolen plans that can save her people and restore freedom to the galaxy...
$>
Tips:
You will need to use the command patch (man patch)
When you copy both files, make sure to return to the line. (press enter :D)


## Installation
The project is installed by using make.

## Usage
It is used for file handling, file searching, file creation and deletion etc.
```
./my_project argument1 argument2
```

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
