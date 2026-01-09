#include <stdio.h>
#include <time.h>
#include "file_ops.h"

#define LOG_FILE "logs/system_log.txt"

/* Write message to log file with timestamp */
void write_log(const char *message) {
    FILE *fp = fopen(LOG_FILE, "a");  // append mode

    if (fp == NULL) {
        perror("Error opening log file");
        return;
    }

    time_t now = time(NULL);
    fprintf(fp, "[%s] %s\n", ctime(&now), message);

    fclose(fp);
}

/* Read and display log file */
void read_log(void) {
    FILE *fp = fopen(LOG_FILE, "r");
    char ch;

    if (fp == NULL) {
        perror("Error reading log file");
        return;
    }

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
}

