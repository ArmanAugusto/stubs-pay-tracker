#include <stdio.h>
#include <stdlib.h>
#include <libpq-fe.h>
#include "about_spt.h"
#include "database.h"

/*
 *  Finish log_in_user function
 */

void authentication_menu_actions() {
    int choice = 0;

    printf("\nEnter menu command:  ");
    scanf("%i", &choice);
    printf("You chose %i.\n\n", choice);

    switch(choice) {
        case 1:
            printf("\nLog in user\n\n");
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

/*
void log_in_user() {
	

    PGconn *connection = PQconnectdb("user=arman password=TekkonKinkreet14! dbname=stubs_pay_tracker_db");

	if(PQstatus(connection) == CONNECTION_BAD) {
		fprintf(stderr, "Connection to the database has failed:  %s\n", PQerrorMessage(connection));
		PQfinish(connection);
		exit(1);
	}

	//PGresult *result = PQexec(connection, "SELECT 

	PQfinish(connection);
}
*/

void query_user_account() {
	PGconn *connection = PQconnectdb("user=arman password=TekkonKinkreet dbname=stubs_pay_tracker_db");
  
	if(PQstatus(connection) == CONNECTION_BAD) {
    	fprintf(stderr, "Connection to the database has failed:  %s\n", PQerrorMessage(connection));	
    	PQfinish(connection);
		exit(1);
  	}

  	PGresult *result = PQexec(connection, "SELECT * FROM useraccounts;");

  	if(PQresultStatus(result) != PGRES_TUPLES_OK) {
    	printf("Unable to retrieve data\n");
    	PQclear(result);
    	PQfinish(connection);
		exit(1);
  	}

  	printf("%s %s %s %s %s %s %s\n", PQgetvalue(result, 0, 0), PQgetvalue(result, 0, 1), PQgetvalue(result, 0, 2), PQgetvalue(result, 0, 3), PQgetvalue(result, 0, 4), PQgetvalue(result, 0, 5), PQgetvalue(result, 0, 6));

  	PQclear(result);
  	PQfinish(connection);
}
