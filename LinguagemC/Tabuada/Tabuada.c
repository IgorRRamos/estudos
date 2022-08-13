#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num, multiplicacao;

    scanf("%d", &num);

    for (int i = 1; i <= 10; i++) {
        multiplicacao = i * num;
        printf("%d x %d = %d\n", i, num, multiplicacao);
    }

    return 0;
}