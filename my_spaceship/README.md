# Welcome to My Spaceship
***

## Task
Create a function that takes in a flight path of a rocket ship as a string of letters and returns the following format:
"{x: X, y: Y, direction: 'DIRECTION'}"
X,Y represent the ending coordinates of your ship and direction represents its final direction.
All spaceships will start at 0,0 and will face up.
Moving left/right will influence X and moving up/down will influence Y.

## Description
To design a simulator that creates a virtual “space” and keeps track of the basic movements and direction of a given ship.
To keep track of where the ship is and it's orientation relative to its starting point.
The ship simulator must take in a string of letters that represent a planned flight path for a given rocket ship.
In a ship's flight path there are only 3 valid options for movement; R for turning right, L for turning left and A for advancing.
“RRALAA” as flight path means: Turn right, turn right, advance, turn left, advance, advance.
The program must return the x,y coordinates of a ship's final destination as well as it's orientation relative to the starting point.
Orientation is represented as left, right, up or down. The x,y coordinate can be positive or negative values.
An upward-facing rocket ship leaves its starting point of 0,0 and is given the flight path of “RRALAA”, its final location will be 2,-1 and it will be facing right.

## Installation
The project is installed with npm i.e node package manager.

## Usage
This simulator creates a virtual “space” and keeps track of the basic movements and direction of a given ship.
It takes in a string of letters that represent a planned flight path for a given rocket ship
```
./my_project argument1 argument2
```

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
