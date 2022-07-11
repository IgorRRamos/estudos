#include <stdio.h>

int main() {
    double A, B, C, triangle, trapeze, circle, square, rectangle, PI;
    PI = 3.14159;

    scanf("%lf %lf %lf", &A, &B, &C);

    triangle = A * C / 2;
    circle = PI * pow(C, 2);
    trapeze = (A + B) * C / 2;
    square = B * B;
    rectangle = A * B;

    printf("TRIANGULO: %.3lf\n", triangle);
    printf("CIRCULO: %.3lf\n", circle);
    printf("TRAPEZIO: %.3lf\n", trapeze);
    printf("QUADRADO: %.3lf\n", square);
    printf("RETANGULO: %.3lf\n", rectangle);

    return 0;
}