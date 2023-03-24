/*
**
** QWASAR.IO -- my_each
**
**
** @param {String[]} str
**
*/

function my_each(str) {
    var i = 0;
    while (i < str.length) {
        console.log(str[i]);
        i++;
    }
    return;
}

// my_each(["blah1", "blah2", "blah3"]);
// my_each(["blah1", "blah2"]);
// my_each(["1arg"]);