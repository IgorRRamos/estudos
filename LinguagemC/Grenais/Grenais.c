#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int golGremio, golInter, resp, cont = 0, gremio = 0, inter = 0, empates = 0;

    do {
        scanf("%d %d", &golInter, &golGremio);
        if (golGremio == golInter) {
            empates++;
        }
        if (golInter > golGremio) {
            inter++;
        }

        if (golGremio > golInter) {
            gremio++;
        }

        cont++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &resp);

    } while (resp != 2);

    printf("%d grenais\n", cont);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empates);

    if (inter > gremio) {
        printf("Inter venceu mais\n");
    } else if (gremio > inter) {
        printf("Gremio venceu mais\n");
    }

    return 0;
}