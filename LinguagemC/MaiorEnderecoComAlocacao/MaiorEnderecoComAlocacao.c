#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 2

int main(int argc, char *argv[]) {
    int *p1 = (int *)calloc(1, sizeof(int));
    int *p2 = (int *)calloc(1, sizeof(int));

    puts("DIGITE 2 NUMEROS:");
    scanf("%d", p1);
    scanf("%d", p2);

    if (&p1 > &p2) {
        printf("%d\n", &p1);
    } else {
        printf("%d\n", &p2);
    }

    return 0;
}