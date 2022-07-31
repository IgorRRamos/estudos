#include <stdio.h>

int main() {
    float A, B, C, X;

    scanf("%f %f %f", &A, &B, &C);

    if (A < B) {
        X = A;
        A = B;
        B = X;
    }
    if (B < C) {
        X = B;
        B = C;
        C = X;
    }
    if (A < B) {
        X = A;
        A = B;
        B = X;
    }

    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
    } else if (A * A == B * B + C * C) {
        printf("TRIANGULO RETANGULO\n");
    } else if (A * A > B * B + C * C) {
        printf("TRIANGULO OBTUSANGULO\n");
    } else if (A * A < B * B + C * C) {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (A == B && B == C) {
        printf("TRIANGULO EQUILATERO\n");
    } else if (A == B || B == C) {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}