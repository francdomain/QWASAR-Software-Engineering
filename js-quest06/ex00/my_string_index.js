/*
**
** QWASAR.IO -- my_string_index
**
**
** @param {String} haystack
** @param {Character} needle
** @return {integer}
**
*/

function my_string_index(haystack, needle) {
    var i = 0;
    while (i < haystack.length) {
        if (haystack[i] == needle) {
            return i;
        } 
        i++;
    }
    return -1;
}

// console.log(my_string_index("hello", "l"));
// console.log(my_string_index("aaaaa", "b"));