#include <stdio.h>

int main() {
    double salary, newSalary, percentage;

    scanf("%lf", &salary);

    if (salary <= 400.00) {
        percentage = salary / 100 * 15;
        newSalary = salary + percentage;
        printf("Novo salario: %.2lf\n", newSalary);
        printf("Reajuste ganho: %.2lf\n", percentage);
        printf("Em percentual: 15 %%\n");
    } else if (salary <= 800.00) {
        percentage = salary / 100 * 12;
        newSalary = salary + percentage;
        printf("Novo salario: %.2lf\n", newSalary);
        printf("Reajuste ganho: %.2lf\n", percentage);
        printf("Em percentual: 12 %%\n");
    } else if (salary <= 1200.00) {
        percentage = salary / 100 * 10;
        newSalary = salary + percentage;
        printf("Novo salario: %.2lf\n", newSalary);
        printf("Reajuste ganho: %.2lf\n", percentage);
        printf("Em percentual: 10 %%\n");
    } else if (salary <= 2000.00) {
        percentage = salary / 100 * 7;
        newSalary = salary + percentage;
        printf("Novo salario: %.2lf\n", newSalary);
        printf("Reajuste ganho: %.2lf\n", percentage);
        printf("Em percentual: 7 %%\n");
    } else {
        percentage = salary / 100 * 4;
        newSalary = salary + percentage;
        printf("Novo salario: %.2lf\n", newSalary);
        printf("Reajuste ganho: %.2lf\n", percentage);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}