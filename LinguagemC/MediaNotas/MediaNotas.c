#include <stdio.h>

int main() {
    double n1, n2, n3, n4, n5, average;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    average = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10.0;

    if (average >= 7.0) {
        printf("Media: %.1lf\n", average);
        printf("Aluno aprovado.\n");
        
    } else if (average >= 5.0) {
        printf("Media: %.1lf\n", average);
        printf("Aluno em exame.\n");
        scanf("%lf", &n5);
        printf("Nota do exame: %.1lf\n", n5);
        average = (average + n5) / 2;
        printf("Aluno aprovado.\n");
        printf("Media final: %.1lf\n", average);

    } else if (average < 5.0) {
        printf("Media: %.1lf\n", average);
        printf("Aluno reprovado.\n");
    }

    return 0;
}