#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void ordenando(int *p1, int *p2, int *p3);

int main(int argc, char *argv[]) {
    int *p1 = (int *)calloc(1, sizeof(int));
    int *p2 = (int *)calloc(1, sizeof(int));
    int *p3 = (int *)calloc(1, sizeof(int));

    puts("DIGITE 3 NUMEROS:");
    scanf("%d", p1);
    scanf("%d", p2);
    scanf("%d", p3);

    ordenando(p1, p2, p3);

    printf("%d ", *p1);
    printf("%d ", *p2);
    printf("%d ", *p3);

    return 0;
}

void ordenando(int *p1, int *p2, int *p3) {
    int troca;

    if (*p1 == *p2 || *p1 == *p3 || *p2 == *p3) {
        puts("\n1");
    } else {
        puts("\n0");

        if (*p1 > *p2) {
            troca = *p1;
            *p1 = *p2;
            *p2 = troca;
        }
        if (*p1 > *p3) {
            troca = *p1;
            *p1 = *p3;
            *p3 = troca;
        }
        if (*p3 < *p2) {
            troca = *p2;
            *p2 = *p3;
            *p3 = troca;
        }
    }
}