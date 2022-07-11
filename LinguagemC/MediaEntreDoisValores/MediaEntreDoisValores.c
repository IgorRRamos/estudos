#include <stdio.h>

int main() {
    double num1, num2, average;

    scanf("%lf", &num1);
    scanf("%lf", &num2);

    average = ((num1 * 3.5) + (num2 * 7.5)) / 11.0;

    printf("MEDIA = %.5lf\n", average);

    return 0;
}