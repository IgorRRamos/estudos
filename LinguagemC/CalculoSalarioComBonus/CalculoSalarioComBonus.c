#include <stdio.h>

int main() {
    char name;
    double salary, sales, total;

    scanf("%s", &name);
    scanf("%lf", &salary);
    scanf("%lf", &sales);

    total = sales / 100 * 15 + salary;

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}