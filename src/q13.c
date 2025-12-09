#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (((num & 1) == 0) && ((num / 3) * 3 == num)) {
        printf("%d is divisible by both 2 and 3\n", num);
    } else {
        printf("%d is not divisible by both 2 and 3\n", num);
    }

    return 0;
}
