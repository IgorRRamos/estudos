#include <stdio.h>

int main() {
    int amount, code;
    double price;

    scanf("%d %d", &code, &amount);

    if (code == 1) {
        price = amount * 4.00;
    } else if (code == 2) {
        price = amount * 4.50;
    } else if (code == 3) {
        price = amount * 5.00;
    } else if (code == 4) {
        price = amount * 2.00;
    } else if (code == 5) {
        price = amount * 1.50;
    }

    printf("Total: R$ %.2lf\n", price);

    return 0;
}