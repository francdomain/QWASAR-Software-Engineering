function my_spaceship(flightPath) {
    var X = 0;
    var Y = 0;

    var Direction = {
          'Up': 'up',
          'Down': 'down',
          'Left': 'left',
          'Right': 'right'
    };

    var currentDirection = Direction['Up'];

    for (i = 0; i < flightPath.length; i++) {
        if (flightPath[i] == 'R') {
            if(currentDirection == Direction['Up']){
                currentDirection = Direction['Right'];
            } else if(currentDirection == Direction['Right']) {
                currentDirection = Direction['Down'];
            } else if(currentDirection == Direction['Down']) {
                currentDirection = Direction['Left'];
            } else if(currentDirection = Direction['Left']) {
                currentDirection = Direction['Up'];
            }
        }
        else if (flightPath[i] == 'A') {
            if(currentDirection == Direction['Up']) {
                Y -= 1;
            } else if(currentDirection == Direction['Right']) {
                X += 1;
            } else if(currentDirection == Direction['Down']) {
                Y += 1;
            } else if(currentDirection == Direction['Left']) {
                X -= 1;
            }
        }
        else if (flightPath[i] == 'L') {
            if(currentDirection == Direction['Up']) {
                currentDirection = Direction['Left'];
            } else if(currentDirection == Direction['Left']) {
                currentDirection = Direction['Down'];
            } else if(currentDirection == Direction['Down']) {
                currentDirection = Direction['Right'];
            } else if(currentDirection == Direction['Right']) {
                currentDirection = Direction['Up'];
            }
        }
    }
    movement = `{x: ${X}, y: ${Y}, direction: '${currentDirection}'}`;
    return movement;
}


// console.log(my_spaceship("RAALALL"));
// console.log(my_spaceship("AAAA"));
// console.log(my_spaceship(""));
// console.log(my_spaceship("RAARA"));
