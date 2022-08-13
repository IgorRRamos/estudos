#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num = 1, cont1 = 7;

    while (num <= 9) {
        printf("I=%d J=%d\n", num, cont1--);
        printf("I=%d J=%d\n", num, cont1--);
        printf("I=%d J=%d\n", num, cont1--);

        num += 2;
        cont1 += 5;
    }

    return 0;
}
