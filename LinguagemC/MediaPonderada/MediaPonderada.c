#include <stdio.h>

int main() {
    double num1, num2, num3, average;

    scanf("%lf", &num1);
    scanf("%lf", &num2);
    scanf("%lf", &num3);

    average = ((num1 * 2) + (num2 * 3) + (num3 * 5)) / 10.0;

    printf("MEDIA = %.1lf\n", average);

    return 0;
}