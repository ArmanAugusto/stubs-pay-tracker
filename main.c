#include <stdio.h>
#include "utilities.h"
#include "menus.h"

/*
 *  main.c
 *
 *  driver file
 *
 */

int main(int argc, char *argv[]) {
    printf("\n\n\n\t\t********  STUBS PAY TRACKER  ********\n\n\n");
    printf("\t\tCurrent Date:\t");
    display_current_date();
    printf("\t\tCurrent Time:\t");
    display_current_local_time();
    printf("\n\n");
    authentication_menu();

     return 0;
 }
