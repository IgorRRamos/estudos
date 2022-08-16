#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num, cont = 1;

    scanf("%d", &num);

    for (int i = 1; i <= num*4; i+=4) {
        printf("%d ", i);
        printf("%d ", i+1);
        printf("%d ", i+2);
        printf("PUM\n");
    }

    return 0;
}