#include <stdio.h>

int main() {
    int time, velocity;
    double consumption;

    scanf("%d", &time);
    scanf("%d", &velocity);

    consumption = time * velocity / 12.0;

    printf("%.3lf\n", consumption);

    return 0;
}