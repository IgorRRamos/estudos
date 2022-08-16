#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num, num2;
} numeros;

int main(int argc, char *argv[]) {
    numeros comp;
    numeros *p1, *p2;

    p1 = &comp.num;
    p2 = &comp.num2;


    printf("DIGITE UM NUMERO: ");
    scanf("%d", &comp.num);

    printf("DIGITE OUTRO NUMERO: ");
    scanf("%d", &comp.num2);

    if (&p1 > &p2) {
        printf("%d", &p1);
    } else {
        printf("%d\n", &p2);
    }

    return 0;
}