#include <stdio.h>

typedef struct {
    int num[5];
} numeros;

void dobro(numeros *p1);

int main() {
    numeros valor;
    numeros *p1;
    p1 = &valor.num;

    printf("Digite cinco numeros:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &valor.num[i]);
    }

    dobro(p1);

    for (int i = 0; i < 5; i++) {
        printf("%d\n", valor.num[i]);
    }

    return 0;
}
void dobro(numeros *p1) {
    for (int i = 0; i < 5; i++) {
        p1-> num[i]*= 2;
    }
}
