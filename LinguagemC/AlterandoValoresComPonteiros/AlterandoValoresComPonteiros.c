#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void trade(int *num1, float *num2, char *name1);

int main(int argc, char *argv[]) {
    int x = 10, *p1 = &x;
    float y = 15.5, *p2 = &y;
    char nome[] = "Igor", *p3 = &nome;

    printf("%d %.2f %s\n", x, y, nome);

    trade(p1, p2, p3);

    printf("%d %.2f %s\n", x, y, nome);

    return 0;
}

void trade(int *num1, float *num2, char *name1) {
    *num1 = 70;
    *num2 = 45.5;
    strcpy(name1, "yasmin");
}