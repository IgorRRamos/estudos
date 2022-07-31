#include <stdio.h>

int main() {
    float num[7];
    int contagem;

    contagem = 0;

    for (int i = 0; i < 6; i++) {
        scanf("%f", &num[i]);
        if (num[i] > 0) {
            contagem++;
        }
    }
    printf("%d valores positivos\n", contagem);

    return 0;
}
