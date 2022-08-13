#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num1, num2, soma = 0, troca;
    scanf("%d", &num1);
    scanf("%d", &num2);

    if(num1 > num2 || num2 < 0){
    troca = num1;
    num1 = num2;
    num2 = troca;
    }
 
    for(int i = num1 + 1; i < num2; i++){
        if(i % 2 != 0){
            soma = soma + i;
        }
    }
    printf("%d\n", soma);
    return 0;
}