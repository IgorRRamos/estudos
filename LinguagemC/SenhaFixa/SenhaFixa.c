#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int senha;
} verificacao;

int main(int argc, char *argv[]) {
    verificacao acesso;

    do {
       
        scanf("%d", &acesso.senha);

        if (acesso.senha == 2002) {
            printf("Acesso Permitido\n");

        } else if (acesso.senha != 2002) {
            printf("Senha Invalida\n");
        }

    } while (acesso.senha != 2002);

    return 0;
}

