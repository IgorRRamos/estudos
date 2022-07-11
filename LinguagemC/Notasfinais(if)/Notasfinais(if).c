#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    double note1, note2, finalNote;

    printf("Digite a primeira note: ");
    scanf("%lf", &note1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &note2);

    finalNote = note1 + note2;
    printf("NOTA FINAL = %.1lf\n", finalNote);

    if (finalNote < 60) {
        printf("REPROVADO!!\n");
    }

    return 0;
}