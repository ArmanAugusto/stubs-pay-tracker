#include <stdio.h>
#include <stdlib.h>
#include <libpq-fe.h>
#include "utilities.h"
#include "menus.h"
#include "database.h"
#include "about_spt.h"
#include "authentication.h"

/*
 *  main.c
 *
 *  driver file
 *
 */

 // finish the log_in_user function in authentication files
 // use login info to log user in

int main(int argc, char *argv[]) {
	user_account usr, *user;
	user = &usr;

    printf("\n\n\n\t\t********  STUBS PAY TRACKER  ********\n\n\n");
    printf("\t\tCurrent Date:\t");
    display_current_date();
    printf("\t\tCurrent Time:\t");
    display_current_local_time();
    printf("\n\n");
    authentication_menu();
    //authentication_menu_actions();
	query_user_account();
	log_in_user(user);
    printf("\n\n");

     return 0;
}
