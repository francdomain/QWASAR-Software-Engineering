/*
**
** QWASAR.IO -- my_map_mult_two
**
**
** @param {Integer[]} param_1
** @return {integer[]}

**
*/

function my_map_mult_two(arr) {
    var new_array = [];
    var i = 0;

    while (i < arr.length) {
        new_array.push(arr[i] * 2);
        i++;
    }
    return new_array;
}

// console.log(my_map_mult_two([1, 2, 3, 4, 5]));
// console.log(my_map_mult_two([]));