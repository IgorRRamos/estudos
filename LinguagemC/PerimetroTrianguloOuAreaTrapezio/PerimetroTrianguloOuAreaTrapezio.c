#include <stdio.h>

int main() {
    double A, B, C, area, perimeter;

    scanf("%lf %lf %lf", &A, &B, &C);

    if (A < B + C && B < A + C && C < A + B) {
        perimeter = A + B + C;
        printf("Perimetro = %.1lf\n", perimeter);
    } else {
        area = (A + B) * C / 2;
        printf("Area = %.1lf\n", area);
    }

    return 0;
}