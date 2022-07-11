#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    int age1, age2;
    double average;
    char name1[50], name2[50];

    printf("Dados da primeira pessoa: \n");
    printf("Nome: ");
    setbuf(stdin,NULL);
    gets(name1);
    printf("Idade: ");
    scanf("%d", &age1);

    printf("Dados da segunda pessoa: \n");
    printf("Nome: ");
    setbuf(stdin,NULL);
    gets(name2);
    printf("Idade: ");
    scanf("%d", &age2);

    average = (double) (age1 + age2) / 2;

    printf("\nDados da primeira pessoa:\n");
    printf("Nome: %s\n", name1);
    printf("Idade: %d\n", age1);
    printf("\nDados da segunda pessoa: \n");
    printf("Nome: %s\n", name2);
    printf("Idade: %d\n", age2);

    printf("\nA idade media de %s e %s eh de %.1lf anos", name1, name2, average);

        return 0;
}