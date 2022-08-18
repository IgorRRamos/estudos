#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num;

    do {
        scanf("%d", &num);

        for (int i = 1; i <= num; i++) {
            if (i != num) {
                printf("%d ", i);
            } else if (i == num) {
                printf("%d\n", i);
            }
        }

    } while (num != 0);

    return 0;
}