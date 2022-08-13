#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int numeros [5], cont = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }
    for (int i = 0; i < 5; i++) {
        if (numeros[i] % 2 == 0) {
            cont++;
        }
    }
    printf("%d valores pares\n", cont);

    return 0;
}