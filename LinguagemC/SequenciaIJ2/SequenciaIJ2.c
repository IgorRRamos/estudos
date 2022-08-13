#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int h = 1, i = 1, j = 7; h <= 15; h++, j--) {
        printf("I=%d J=%d\n", i, j);
        if (j == 5) {
            i += 2;
            j += 3;
        }
    }

    return 0;
}
