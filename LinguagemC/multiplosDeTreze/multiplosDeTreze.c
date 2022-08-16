#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void trade(int *num1, int *num2);

int main(int argc, char *argv[]) {
    int num1, num2, soma = 0;
    int *p1 = &num1, *p2 = &num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if(num1 > num2){
        trade(p1, p2);
    }
    
    for(int i = num1; i <= num2; i++){
        if(i % 13 != 0){
            soma += i;
        }
    }

    printf("%d\n", soma);


    return 0;
}

void trade(int *num1, int *num2){
    int troca = *num1;
    *num1 = *num2;
    *num2 = troca;
}