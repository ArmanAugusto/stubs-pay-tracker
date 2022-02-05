#include <stdio.h>
#include <stdlib.h>
#include "about_spt.h"

void display_about_spt() {
    FILE * fPtr;
    char ch;

    fPtr = fopen("about_spt.txt", "r");

    if(fPtr == NULL) {
        printf("[ERROR] Oops. Something went wrong...\n");
        exit(EXIT_FAILURE);
    }

    do {
        ch = fgetc(fPtr);
        putchar(ch);
    } while(ch != EOF);

    fclose(fPtr);
}