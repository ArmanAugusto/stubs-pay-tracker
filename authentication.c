#include <stdio.h>
#include "about_spt.h"

void authentication_menu_actions() {
    int choice = 0;

    printf("\nEnter menu command:  ");
    scanf("%i", &choice);
    printf("You chose %i.\n\n", choice);

    switch(choice) {
        case 1:
            printf("\nLog in existing user\n\n");
            break;
        case 2:
            printf("\nCreate Login Account\n\n");
            break;
        case 3:
            display_about_spt();
            break;
        case 4:
            printf("\n\nExiting Stubs Pay Tracker Application...\n\n");
            break;
        default:
            printf("\n[Error] Invalid Entry\n\n");
    }
}