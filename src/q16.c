#include <stdio.h>

int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);

    double average = (x + y) / 2.0;

    printf("Average = %.2lf\n", average);

    return 0;
}
