#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num, indice, cobaias = 0, coelhos = 0, ratos = 0, sapos = 0;
    

    scanf("%d", &num);

    char tipo[num];

    for (int i = 0; i < num; i++) {
        scanf("%d %s", &indice, &tipo[i]);
        cobaias += indice;

        if (tipo[i] == 'R') {
            ratos += indice;
        } else if (tipo[i] == 'S') {
            sapos += indice;
        } else if (tipo[i] == 'C') {
            coelhos += indice;
        }
    }

    printf("Total: %d cobaias\n", cobaias);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf %%\n", coelhos * 100.0 / cobaias);
    printf("Percentual de ratos: %.2lf %%\n", ratos * 100.0 / cobaias);
    printf("Percentual de sapos: %.2lf %%\n", sapos * 100.0 / cobaias);
    
    return 0;
}