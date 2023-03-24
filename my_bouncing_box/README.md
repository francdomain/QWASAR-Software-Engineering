# Welcome to My Bouncing Box
***

## Task
Use javascript to move a box diagonally.

## Description
Complete an index.html file with the missing javascript code in order to replicate the famous Windows Screensaver - Bounce
You need to replace the content of the "div" my_bouncing_box with your Qwasar's login in downcase.
You need to move the "div" with the id my_bouncing_box diagonally.
Defined the (0, 0) coordinate (x, y) at the very top left of your screen.
The box must move diagonally and each time it reaches a border it will change direction of the border it touched.
If the box is moving bottom-right:
-- when it reaches the bottom border it will go top.
-- when it reaches the right border it will go left.
Choose the speed rate for the movement of the box. Between 0.3 and 1 second seems to be good values.
You cannot change the value of the html, moving the box needs to be done using javascript

<!-- $>cat index.html
<html style='background-color: black'>
  <div id="my_bouncing_box" style= "background-color: blue; border-radius: 3px; position: absolute; left: 0px; top: 0px; min-width: 100px; min-height: 100px; text-align: center; font-weight: bold; color: #999;" >Not loaded</div>
  <script type="text/javascript">
    // YOUR CODE
  </script>
</html>
$> -->

You don't have to handle any screen resizing.
Do NOT use canvas tag.
Gandalf is expecting 2 to 3 bounces in less than 40 secs. If you have an "infinity loop error," it might be that your box is not moving fast enough.

## Installation
The project can be installed with the use of

## Usage
It creates an animation moving diagonally from one coordinate to another
```
./my_project argument1 argument2
```

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
