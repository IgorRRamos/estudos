#include <stdio.h>

typedef struct {
    int dia, diaFim, hora, horaFim, minuto, minutoFim, segundo, segundoFim;
} horarios;

int main() {

    horarios acesso;

    printf("Dia ");
    scanf("%d", &acesso.dia);
    scanf("%d:%d:%d", &acesso.hora, &acesso.minuto, &acesso.segundo);

    printf("Dia ");
    scanf("%d", &acesso.diaFim);
    scanf("%d:%d:%d", &acesso.horaFim, &acesso.minutoFim, &acesso.segundoFim);

    acesso.segundo = acesso.segundoFim - acesso.segundo;
    acesso.minuto = acesso.minutoFim - acesso.minuto;
    acesso.hora = acesso.horaFim - acesso.hora;
    acesso.dia = acesso.diaFim - acesso.dia;

    if (acesso.segundo < 0) {
        acesso.segundo += 60;
        acesso.minuto--;
    }

    if (acesso.minuto < 0) {
        acesso.minuto += 60;
        acesso.hora--;
    }

    if (acesso.hora < 0) {
        acesso.hora += 24;
        acesso.dia--;
    }

    printf("%d dia(s)\n", acesso.dia);
    printf("%d hora(s)\n", acesso.hora);
    printf("%d minutos(s)\n", acesso.minuto);
    printf("%d segundo(s)\n", acesso.segundo);

    return 0;
}