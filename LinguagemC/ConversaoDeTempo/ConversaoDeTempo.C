#include <stdio.h>

int main() {
    int N, hours, rest, minutes, seconds;

    scanf("%d", &N);

    hours = N / 3600;
    rest = N % 3600;
    minutes = rest / 60;
    seconds = rest % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}