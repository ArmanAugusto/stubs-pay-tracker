#include <stdio.h>
#include <time.h>
#include <string.h>
#include "utilities.h"

#define BUF_LEN 256

void display_current_date() {
    char buf[BUF_LEN] = {0};
    
    time_t t = time(NULL);
    
    if(t == -1) {
        puts("[ERROR]");
    }

    struct tm* current_date = localtime(&t);

    strftime(buf, BUF_LEN, "%A, %B %-d, %G", current_date);
    puts(buf); 
}

void display_current_local_time() {
    char buf[BUF_LEN] = {0};
    
    time_t t = time(NULL);
    
    if(t == -1) {
        puts("[ERROR]");
    }

    struct tm* current_time = localtime(&t);

    strftime(buf, BUF_LEN, "%r", current_time);
    puts(buf); 
}

