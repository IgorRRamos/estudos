#include <stdio.h>

int main() {
    int yers, months, days, sum;

    scanf("%d", &sum);

    yers = sum / 365;
    months = (sum % 365) / 30;
    days = (sum % 365) % 30;

    printf("%d ano(s)\n", yers);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);

    return 0;
}