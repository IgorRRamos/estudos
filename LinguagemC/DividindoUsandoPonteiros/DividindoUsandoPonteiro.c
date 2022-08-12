#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "");

    int x = 10;
    int *px = &x;

    printf("%d", *px / 5);

    return 0;
}