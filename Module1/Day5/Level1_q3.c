#include <stdio.h>
#include <stdlib.h>
#include <string.h>
unsigned long calculateTotalSeconds(const char* timeString) {
    char* token;
    char* delimiter = ":";
    unsigned long hours, minutes, seconds;
    char* timeCopy = strdup(timeString);
    token = strtok(timeCopy, delimiter);
    hours = strtoul(token, NULL, 10);
    token = strtok(NULL, delimiter);
    minutes = strtoul(token, NULL, 10);
    token = strtok(NULL, delimiter);
    seconds = strtoul(token, NULL, 10);
    unsigned long totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
    free(timeCopy);
    return totalSeconds;
}
int main() {
    char timeString[50];
    scanf("%s",timeString);
    unsigned long totalSeconds = calculateTotalSeconds(timeString);
    printf("Total seconds: %lu\n", totalSeconds);
    return 0;
}
