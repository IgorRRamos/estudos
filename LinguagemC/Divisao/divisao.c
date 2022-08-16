#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int cont;
    double divisao, num1, num2;

    scanf("%d", &cont);

    for (int i = 0; i < cont; i++) {

        scanf("%lf %lf", &num1, &num2);
        if (num2 == 0) {
            printf("divisao impossivel\n");
        } else {
            divisao = num1 / num2;
            printf("%.1lf\n", divisao);
        }
    }

    return 0;
}