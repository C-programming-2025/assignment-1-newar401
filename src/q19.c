#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if ((a == b) && (b != c)) {
        printf("Condition is true\n");
    } else {
        printf("Condition is false\n");
    }

    return 0;
}
