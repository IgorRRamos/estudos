#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num;

    scanf("%d", &num);

    int numeros[num];

    for (int i = 0; i < num; i++) {
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < num; i++) {
        if (numeros[i] == 0) {
            printf("NULL\n");
        } else if (numeros[i] <= 0 && numeros[i] % 2 == 0) {
            printf("EVEN NEGATIVE\n");
        } else if (numeros[i] <= 0 && numeros[i] % 2 != 0) {
            printf("ODD NEGATIVE\n");
        } else if (numeros[i] >= 0 && numeros[i] % 2 == 0) {
            printf("EVEN POSITIVE\n");
        } else if (numeros[i] >= 0 && numeros[i] % 2 != 0) {
            printf("ODD POSITIVE\n");
        }
    }

    return 0;
}