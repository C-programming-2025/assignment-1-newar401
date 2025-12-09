#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    int temp = x;
    x = y;
    y = z;
    z = temp;

    printf("%d %d %d\n", x, y, z);

    return 0;
}
