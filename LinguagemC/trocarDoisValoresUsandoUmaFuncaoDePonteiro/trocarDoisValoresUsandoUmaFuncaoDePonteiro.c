#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void trade(int *num1, int *num2);

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "");

    int x = 10, y = 20;
    int *p1 = &x, *p2 = &y;

    trade(p1, p2);

    printf("%d, %d", x, y);

    return 0;
}

void trade(int *num1, int *num2) {
    *num1 = 20;
    *num2 = 40;
}