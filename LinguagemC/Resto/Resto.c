#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num;

    scanf("%d", &num);

    for (int i = 1; i <= 10000; i++) {
        if (i % num == 2) {
            printf("%d\n", i);
        }
    }

    return 0;
}