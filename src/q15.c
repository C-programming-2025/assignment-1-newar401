#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if ((num > 0) && (num % 2 == 0)) {
        printf("%d is positive and even\n", num);
    } else {
        printf("%d is not positive and even\n", num);
    }

    return 0;
}
