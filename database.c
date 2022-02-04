#include <stdio.h>
#include <stdlib.h>
#include <libpq-fe.h>
#include "database.h"

char connect_to_pg_db() {
    PGconn *conn = PQconnectdb("user=user password=password dbname=stubs_pay_tracker_db");

    if(PQstatus(conn) == CONNECTION_BAD) {
        fprintf(stderr, "Connection to database failed: %s\n", PQerrorMessage(conn));
        PQfinish(conn);
        exit(1);

        return 'f';
    } else {

        printf("Database connection successful...\n");
        PQfinish(conn);

        return 't';
    }

    return 't';
}
