#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    FILE *fp;
    char ch;

    // Open the file given in command line
    fp = fopen(argv[1], "r");


    // Read and display contents
    printf("Contents of %s:\n", argv[1]);
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}

