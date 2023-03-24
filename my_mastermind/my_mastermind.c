#include "my_mastermind.h"

int main(int argc, char* argv[])
{
    int codeSize = 4;
    char codeLine[codeSize]; // Stores the secret code
    int trials = 10; // Maximum number of attempts.

    // if no arguments passed to the command line
    if (argc == 1) {
        mystCode(codeLine);
    }

    /*--> To VIEW THE SECRET CODE RANDOMLY GENERATED */

    // int i = 0;
    // while (i < codeSize) {
    //     printf("%c", codeLine[i]);
    //     i++;
    // }
    // printf("\n");


    // if arguments are passed to the command line
    if (argc > 1) {
        int i = 0;
        while (i < argc){
            if (strcmp(argv[i], "-c") == 0){
                for (int j = 0; j < codeSize; j++){
                    codeLine[j] = argv[i+1][j];
                }
                codeLine[codeSize] = '\0';
            }
            if (strcmp(argv[i], "-t") == 0){
                trials = atoi(argv[i+1]);
            }
            i++;
        }
    }

    int attempts = 0;
    while (attempts < trials) {
        if (attempts == 0) {
            printf("Will you find the secret code?\nPlease enter a valid guess\n");
        }
        printf("---\nRound %i\n", attempts);
        char inject[5];// integer array to received the user's input
        int resp; // variable to hold the integer equivalent received from user;
        ssize_t numCharRead;// number of bytes read from the read function.
        int wellPlacedCount = 0; // variable to keep count of the well placed pieces
        int misPlacedCount = 0; // variable to keep count of the misplaced pieces
        // char guessLine[codeSize + 1];

        // Read users input from stdin
        while(1) {
            printf(">\n");
            numCharRead = read(0, inject, sizeof(inject));

            if(numCharRead == 0){// Handles EOF
                return 1; // exits through code 1
            }

            if (numCharRead == -1) { // Handles any error in the process of reading values
                return 1; // exits through code 1.
            }

            if (numCharRead == 5){ // if number of bytes read is 5, 4 bytes has been read from stdin.
                inject[numCharRead] = '\0';
                resp = atoi(inject); // converting the input to an integer number.

                if (resp == 0) { // if the integer response is 0, the input is alphabets only, no numbers.
                    printf("Wrong input!\n");
                }
                else{
                    if (resp >= 0000 && resp <= 8888){// number between least 4 digits and most 4 digits number
                        // checking for uniqueness
                        if (inject[0] == inject[1] || inject[0] == inject[2] || inject[0] == inject[3] ||
                        inject[1] == inject[2] || inject[1] == inject[3] || inject[2] == inject[3]) {
                            printf("Wrong input!\n");
                        }
                        else{
                            break;// No guess digit repeated
                        }
                    }
                }
            }
            else{
                printf("Wrong input!\n"); // More than 4 digits passed
            }
        }

        int i = 0;
        while (i < codeSize) {
            if(codeLine[i] == inject[i]) {
                wellPlacedCount++;
            }
            if(locator(codeLine, inject[i]) != 0 && codeLine[i] != inject[i]) {
                misPlacedCount++;
            }
            i++;
        }

        if(wellPlacedCount == codeSize) {
            printf("Congratz! You did it!\n");
            return 0;
        } else {
        	printf("Well placed pieces: %i\n", wellPlacedCount);
            printf("Misplaced pieces: %i\n", misPlacedCount);
        }
        attempts++;
    }
    return 0;
}


int magnitude(char* thread) {
    int m = 0, i = 0;
	while (thread[i] != '\0') {
		m++;
        i++;
	}
    return m;
}

int locator(char* thread, char button) {
    int t = 0;
    while (t < magnitude(thread)) {
        if(thread[t] == button) {
            return 1;
        }
        t++;
    }
    return 0;
}

void mystCode(char* codeLine) { // generates a random code
    srand(time(NULL));
    int i = 0, uniq, codeSize = 4;
    char rv;
    while (i < codeSize) {
        do {
            // Assume uniqueness
            uniq = 1;
            rv = rand() % 8 + '0';
            int j = 0;
            // Checking for uniqueness
            while (j < i && uniq == 1) {
                if (codeLine[j] == rv) {
                    uniq = 0;
                }
                j++;
            }
        } while (uniq == 0);
        codeLine[i] = rv;
        i++;
    }
}

