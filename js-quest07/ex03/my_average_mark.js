/*
**
** QWASAR.IO -- my_average_mark
**
**
** @param {String_integer[]} hash_arr
** @return {float}
**
*/

function my_average_mark(hash_arr) {
    var sum_res = 0;
    var i = 0;

    if (hash_arr.length == 0) {
        return (0).toFixed(1);
    }

    while (i < hash_arr.length) {
        sum_res += hash_arr[i]["integer"];
        i++;
        var av_res = sum_res / hash_arr.length;
    }
    return av_res.toFixed(1);
}

// console.log(my_average_mark([
//     {"string": "John", "integer": 7},
//     {"string": "Margot", "integer": 8},
//     {"string": "Jules", "integer": 4},
//     {"string": "Marco", "integer": 19}
//    ]));
// console.log(my_average_mark([
//     {"string": "Quentin", "integer": 1},
//     {"string": "Fred", "integer": 1},
//     {"string": "Julia", "integer": 18},
//     {"string": "stephanie", "integer": 13}
//    ]));
// console.log(my_average_mark([]));