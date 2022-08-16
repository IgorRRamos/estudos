#include <stdio.h>

typedef struct{
    int num, num2;
} numeros;

void troca(int *num1, int *num2);

int main() {
    numeros alt;
    numeros *p1, *p2;
    
    p1= &alt.num;
    p2= &alt.num2;
    
    printf("Digite um numero: ");
    scanf("%d", &alt.num);
    
    printf("Digite outro numero: ");
    scanf("%d", &alt.num2);
    
    troca(p1, p2);
    
    printf("%d\n", alt.num);
    printf("%d\n", alt.num2);

    return 0;
}

void troca(int *num1, int *num2){
    int trade = *num1;
    *num1 = *num2;
    *num2 = trade;
}