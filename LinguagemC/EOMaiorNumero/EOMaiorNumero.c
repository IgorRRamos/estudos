#include <stdio.h>

int main() {
    int a, b, c, larger;

    scanf("%d %d %d", &a, &b, &c);

    larger = (a + b + abs(a - b)) / 2;

    if (larger < c) {
        printf("%d eh o maior\n", c);
    } else {
        printf("%d eh o maior\n", larger);
    }

    return 0;
}