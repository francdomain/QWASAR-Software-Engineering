/*
**
** QWASAR.IO -- my_count_on_it
**
**
** @param {String[]} str
** @return {integer[]}
**
*/

function my_count_on_it(str) {
    var arr = [];
    var i = 0;

    while (i < str.length) {
        arr.push(str[i].length);
        i++;
    }
    return arr;
}

// console.log(my_count_on_it(["This", "is", "the", "way"]));
// console.log(my_count_on_it(["aBc", "AbcE Fgef1"]));
// console.log(my_count_on_it(["aBc"]));