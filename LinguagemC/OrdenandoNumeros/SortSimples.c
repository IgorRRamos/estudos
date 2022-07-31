#include <stdio.h>

int main() {
    int num1, num2, num3, cont1, cont2, cont3, trade;

    scanf("%d %d %d", &num1, &num2, &num3);
    cont1 = num1;
    cont2 = num2;
    cont3 = num3;

    if (cont1 < cont2) {
        trade = cont1;
        cont1 = cont2;
        cont2 = trade;
    }
    if (cont2 < cont3) {
        trade = cont3;
        cont3 = cont2;
        cont2 = trade;
    }
    if (cont1 < cont2) {
        trade = cont1;
        cont1 = cont2;
        cont2 = trade;
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", cont3, cont2, cont1, num1, num2, num3);

    return 0;
}