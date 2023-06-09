#include <stdio.h>
#include <stdlib.h>

int main() {
    char sentence[1000],c[10000];

    // creating file pointer to work with files
    FILE *fptr,*fpt;

    // opening file in writing mode
    fptr = fopen("program.txt", "w");
    fpt = fopen("program.txt", "r");

    // exiting program
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);

    fscanf(fpt, "%[^\n]", c);
    printf("Data from the file:\n%s", c);
    fclose(fpt);

    fclose(fptr);
    return 0;
}

