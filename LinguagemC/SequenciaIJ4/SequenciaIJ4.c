#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int temp = 0, temp2 = 0;

    for (float valor = 0, i = 0, j = 1; i < 2.2; j++) {

        if (temp2 == 0) {
            printf("I=%.0f J=%.0f\n", i, j);
        } else {
            printf("I=%.1f J=%.1f\n", i, j);
        }

        temp++;

        if (temp == 3) {
            i += 0.2;

            valor += 0.2;

            j = valor;

            temp = 0;

            temp2++;
        }
        if (temp2 == 5) {

            temp2 = 0;
        }
    }
    return 0;
}