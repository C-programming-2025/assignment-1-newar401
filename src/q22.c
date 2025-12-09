#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    int result = (int)(sqrt(a + b) + 0.5);  // round to nearest integer

    printf("Square root of the sum rounded = %d\n", result);

    return 0;
}
