#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 5

typedef struct {
    int item[MAXTAM];
    int topo;
} tPilha;

void tPilha_Inicia(tPilha *p) {
    p->topo -= 1;
}

int tPilha_Vazia(tPilha *p) {
    if (p->topo == -1) {
        return 1;
    } else {
        return 0;
    }
}

int tPilha_Cheia(tPilha *p) {
    if (p->topo == MAXTAM - 1) {
        return 1;
    } else {
        return 0;
    }
}

void tPilha_Insere(tPilha *p, int num) {
    if (tPilha_Cheia(p) == 1) {
        puts("ERRO: PILHA CHEIA");
    } else {
        p->topo++;
        p->item[p->topo] = num;
    }
}

int tPilha_Remove(tPilha *p) {
    int num;
    if (tPilha_Vazia(p) == 1) {
        puts("ERRO: PILHA VAZIA");
    } else {
        num = p->item[p->topo];
        p->topo--;
        return num;
    }
}

int main(int argc, char *argv[]) {
    tPilha *p = (tPilha *)calloc(MAXTAM, sizeof(int));
    tPilha_Inicia(p);
    int num1;

    for (int i = 0; i < MAXTAM; i++) {
        printf("DIGITE UM VALOR PARA INSERIR NA PILHA: ");
        scanf("%d", &num1);

        tPilha_Insere(p, num1);
    }

    for (int i = 0; i < MAXTAM; i++) {
        num1 = tPilha_Remove(p);
        printf("\nSAIU: %d", num1);
    }

    return 0;
}