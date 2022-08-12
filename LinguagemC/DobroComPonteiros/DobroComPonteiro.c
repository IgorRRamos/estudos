#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "");
    int numeros[5] = {1, 2, 3, 4, 5}, *p1 = &numeros;

    for (int i = 0; i < 5; i++, p1++) {
        printf("%d ", *p1 * 2);
    }

    return 0;
}