#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);  // reads a single word (no spaces)

    printf("Hello, %s! Nice to meet you.\n", name);

    return 0;
}
