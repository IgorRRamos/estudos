#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num, alcool = 0, gasolina = 0, diesel = 0;

    while (num != 4) {

        scanf("%d", &num);

        switch (num) {
            case 1:
                alcool++;
                break;

            case 2:
                gasolina++;
                break;

            case 3:
                diesel++;
                break;
        }
    }

    printf("MUITO ORBIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}