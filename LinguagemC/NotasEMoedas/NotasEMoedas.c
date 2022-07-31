#include <stdio.h>

int main() {
    double n;

    scanf("%lf", &n);

    int money = n;
    int coins = (n - money) * 100;

    if ((coins * 1000) % 10 == 9) {
        coins++;
    }

    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", money / 100);
    money %= 100;
    printf("%d nota(s) de R$ 50.00\n", money / 50);
    money %= 50;
    printf("%d nota(s) de R$ 20.00\n", money / 20);
    money %= 20;
    printf("%d nota(s) de R$ 10.00\n", money / 10);
    money %= 10;
    printf("%d nota(s) de R$ 5.00\n", money / 5);
    money %= 5;
    printf("%d nota(s) de R$ 2.00\n", money / 2);
    money %= 2;

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", money / 1);
    money %= 1;
    printf("%d moeda(s) de R$ 0.50\n", coins / 50);
    coins %= 50;
    printf("%d moeda(s) de R$ 0.25\n", coins / 25);
    coins %= 25;
    printf("%d moeda(s) de R$ 0.10\n", coins / 10);
    coins %= 10;
    printf("%d moeda(s) de R$ 0.05\n", coins / 5);
    coins %= 5;
    printf("%d moeda(s) de R$ 0.01\n", coins / 1);

    return 0;
}