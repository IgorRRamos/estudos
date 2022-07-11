#include <stdio.h>

int main() {
    double lightning, area, PI;
    PI = 3.14159;

    scanf("%lf", &lightning);

    area = PI * pow(lightning, 2);

    printf("A=%.4lf\n", area);

    return 0;
}