#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int result = ((++num) * 3) - 10;

    printf("Result = %d\n", result);

    return 0;
}
