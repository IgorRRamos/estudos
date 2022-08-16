#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int num, x, y, troca, i = 0, j = 0, soma = 0;

    scanf("%d", &num);
    
    while (i < num) {

        scanf("%d %d", &x, &y);

        if (x == y || y == x + 1 || x == y + 1) {

            printf("0\n");

        } else if (x < y || x > y) {

            if (x > y) {

                troca = x;
                x = y;
                y = troca;

            }
            for (j = 0; j < num; j++) {

                while (x < y - 1) {
                    x += 1;
                    if (x % 2 != 0) {
                        soma += x;
                    }
                }
            }
            printf("%d\n", soma);
            soma = 0;
        }
        i++;
    }
    return 0;
}