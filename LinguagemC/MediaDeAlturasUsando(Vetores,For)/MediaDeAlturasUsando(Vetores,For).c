#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, sum;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char names[n][50];
    int ages[n];
    double height[n];

    for (int i = 0; i < n; i++) {
        printf("Dados da %da pessoa: \n", i + 1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        fgets(names[i], 50, stdin);
        printf("Idade: ");
        scanf("%d", &ages[i]);
        printf("Altura: ");
        scanf("%lf", &height[i]);
    }

    double average, aheight, Mage;
    aheight = 0;
    for (int i = 0; i < n; i++) {
        aheight = aheight + height[i];
    }
    average = aheight / n;
    printf("\nAltura media: %.2lf\n", average);

    sum = 0;
    for (int i = 0; i < n; i++) {
        if (ages[i] < 16) {
            sum++;
        }
    }
    Mage = sum * 100.0 / n;
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", Mage);

    for (int i = 0; i < n; i++) {
        if (ages[i] < 16) {
            printf("%s", names[i]);
        }
    }

    return 0;
}