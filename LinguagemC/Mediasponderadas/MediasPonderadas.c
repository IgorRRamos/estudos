#include <stdio.h>
int main() {
    float nota1, nota2, nota3, total, media;

    int cont, numero;

    scanf("%d", &numero);

    for (cont = 1; cont <= numero; cont++) {
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        total = nota1 * 2.0 + nota2 * 3.0 + nota3 * 5.0;
        media = total / 10.0;
        printf("%.1f\n", media);
    }

        return 0;
}