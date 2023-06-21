#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time getTimeDifference(struct Time start, struct Time end) {
    struct Time diff;
    int totalSeconds1, totalSeconds2, timeDiff;

    totalSeconds1 = start.hours * 3600 + start.minutes * 60 + start.seconds;
    totalSeconds2 = end.hours * 3600 + end.minutes * 60 + end.seconds;

    timeDiff = totalSeconds2 - totalSeconds1;

    diff.hours = timeDiff / 3600;
    diff.minutes = (timeDiff % 3600) / 60;
    diff.seconds = (timeDiff % 3600) % 60;

    return diff;
}

int main() {
    struct Time startTime, endTime, difference;

    printf("Enter start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);
    printf("Enter end time (hours minutes seconds):");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);
    difference = getTimeDifference(startTime, endTime);

    printf("\nTime difference: %d hours, %d minutes, %d seconds\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}
