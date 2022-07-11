#include <stdio.h>

int main() {
    double lightning, volume, PI;
    PI = 3.14159;

    scanf("%lf", &lightning);

    volume = (4.0 / 3.0) * PI * pow(lightning, 3);

    printf("VOLUME = %.3lf\n", volume);

        return 0;
}