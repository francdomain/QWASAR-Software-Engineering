function my_levenshtein(s1, s2) {
    var matrix = [];

    if (s1.length != s2.length) {
        return -1;
    }

    for (var i = 0; i < s1.length + 1; i++) {
        var r = [];
        for (var j = 0; j < s2.length + 1; j++) {
            r.push(j);
        }
        r[0] = i;
        matrix.push(r);
    }

    for (var i = 1; i < s1.length + 1; i++) {
        for (var j = 1; j < s2.length + 1; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                matrix[i][j] = matrix[i - 1][j - 1];
            }
            else {
                matrix[i][j] = 1 + Math.min(matrix[i - 1][j - 1], matrix[i - 1][j], matrix[i][j - 1]);
            }
        }
    }
    return matrix[s1.length][s2.length];
}

// console.log(my_levenshtein("GGACTGA", "GGACTGA"));
// console.log(my_levenshtein("ACCAGGG", "ACTATGG"));
// console.log(my_levenshtein("GGACGGATTCTG", "AGG"));
// console.log(my_levenshtein("" , ""));