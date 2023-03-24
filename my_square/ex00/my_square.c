#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* square(int col) {
    char* colPattern = (char*) malloc (col * sizeof(int));

    int i = 0;
    while (i < col) {
        if (i == 0 || i == (col-1)) {
            strcat(colPattern, "o");
        }
        else {
            strcat(colPattern, "-");
        }
        i++;
    }
    return colPattern;
}

char* sqr_body(int row) {
    char* rowPattern = (char*) malloc (row * sizeof(int));

    int j = 0;
    while (j < row) {
        if (j == 0 || j == (row-1)) {
            strcat(rowPattern, "|");
        }
        else {
            strcat(rowPattern, " ");
        }
        j++;
    }
    return rowPattern;
}

int main(int argc, char* argv[]) {
    
    if (argc > 2) {
        int col = atoi(argv[1]);
        int row = atoi(argv[2]);

        int index = 0;
        while (index < row) {
            if (index == 0 || index == (row-1)) {
                printf("%s\n", square(col));
            }
            else {
                printf("%s\n", sqr_body(row));
            }
            index++;        
        }
    }
    else {
        printf("");
    }
    return 0;
}

