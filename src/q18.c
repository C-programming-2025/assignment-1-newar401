#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int sumOfSquares = (a * a) + (b * b) + (c * c);

    printf("Sum of squares = %d\n", sumOfSquares);

    return 0;
}
