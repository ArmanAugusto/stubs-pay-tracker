#include <stdio.h>
#include <time.h>
#include <string.h>
#include "utilities.h"

/*
 *  fix convert_day and convert_month functions
 */

#define BUF_LEN 256

void display_current_date() {
    char buf[BUF_LEN] = {0};
    
    time_t t = time(NULL);
    
    if(t == -1) {
        puts("[ERROR]");
    }

    struct tm* current = localtime(&t);

    strftime(buf, BUF_LEN, "%A, %B %-d, %G", current);
    puts(buf); 
}

void display_current_local_time() {
    time_t s;
    struct tm* current_time;

    s = time(NULL);
    current_time = localtime(&s);

    printf("Day of the month = %d\n", current_time->tm_mday);
    printf("Day in this year = %d\n", current_time->tm_yday);
    printf("Day in this week = %d\n", current_time->tm_wday);
    printf("Month of this year = %d\n", (current_time->tm_mon + 1));
    printf("Current year = %d\n", (current_time->tm_year + 1900));
    printf("hour:min:sec = %02d:%02d:%02d\n",
            current_time->tm_hour,
            current_time->tm_min,
            current_time->tm_sec);
    printf("\n\n\n");
}

