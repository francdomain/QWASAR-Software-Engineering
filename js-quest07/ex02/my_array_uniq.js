/*
**
** QWASAR.IO -- my_array_uniq
**
**
** @param {Integer[]} arr
** @return {integer[]}
**
*/

function my_array_uniq(arr) {
    var uniq_arr = [...new Set(arr)];
    return uniq_arr;
}

// console.log(my_array_uniq([1, 1, 2]));
// console.log(my_array_uniq([]));
// console.log(my_array_uniq([1, 1, 1, 2, 3, 4, 1]));