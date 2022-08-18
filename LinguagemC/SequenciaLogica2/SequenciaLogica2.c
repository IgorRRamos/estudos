#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num, num2, cont = 1;

    scanf("%d %d", &num, &num2);

    for (int i = 1; i <= num2; i++) {
        if (cont != num) {
            printf("%d ", i);
            cont++;
        } else if (cont == num) {
            printf("%d\n", i);
            cont = 1;
        }
    }

    return 0;
}