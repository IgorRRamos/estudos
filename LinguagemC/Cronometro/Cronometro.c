#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int milesimo = 0, segundo = 0, minuto = 0, hora = 0;

    do{
        if (minuto == 60) {
            hora++;
            minuto = 0;
        }
        if (segundo == 60) {
            segundo = 0;
            minuto++;
        }
        if (milesimo == 47) {
            milesimo = 0;
            segundo++;
        }

        milesimo++;
        printf("%d:%d:%d:%d", hora, minuto, segundo, milesimo);
        system("cls");

    } while (milesimo != 1001);

    return 0;
}
