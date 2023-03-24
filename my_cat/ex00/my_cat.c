#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char* argv[]) 
{
    int f, chr;
    int i;

    for (i = 1; i < argc; i++) {
        f = open(argv[i], O_RDONLY);
        if (!f || argc < 2) {
            write(STDOUT_FILENO, "ERROR", 1);
        }

        while (read(f, &chr, 1) == 1) {
            write(STDOUT_FILENO, &chr, 1);
        }
        close(f);
    }
}