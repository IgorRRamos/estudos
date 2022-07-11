#include <stdio.h>

int main() {
    int number, hours;
    double salary, valuehours;

    scanf("%d", &number);
    scanf("%d", &hours);
    scanf("%lf", &valuehours);

    salary = valuehours * hours;

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", salary);

    return 0;
}