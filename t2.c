#include <stdlib.h>
#include <stdio.h>

void do_heading(char *filename);
int line = 0, page = 0;

int main(int argc, char *argv[]) { 
    char buffer[256];
    FILE *fp;

    if (argc < 2) {
        fprintf(stderr, "\nProper usage is:");
        fprintf(stderr, "\n\nprint_it filename.ext\n");
        return (1);
    }

    if ((fp = fopen(argv[1], "r")) == NULL) { // Corrected argv usage
        fprintf(stderr, "Error opening file, %s!", argv[1]);
        return (1);
    }

    page = 0;
    line = 1;
    do_heading(argv[1]);

    while (fgets(buffer, 256, fp) != NULL) { // Removed misplaced semicolon
        fprintf(stdout, "%4d:\t%s", line++, buffer); // Changed stdprn to stdout
        if (line % 50 == 0) {
            do_heading(argv[1]);
        }
    }

    fclose(fp); // Moved fclose outside the while loop
    return (0);
}

void do_heading(char *filename) {
    page++;
    if (page > 1) {
        fprintf(stdout, "\f"); // Changed stdprn to stdout
        fprintf(stdout, "Page %d, %s \n\n", page, filename);
    }
}