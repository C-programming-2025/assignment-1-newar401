#include <stdio.h>

int main() {
    int days, weeks, remainingDays;

    printf("Enter number of days: ");
    scanf("%d", &days);

    weeks = days / 7;
    remainingDays = days % 7;

    printf("%d week(s) and %d day(s)\n", weeks, remainingDays);

    return 0;
}
