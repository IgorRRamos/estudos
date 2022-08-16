#include <stdio.h>

typedef struct{
    int num, num2;
}numeros;

void soma(int *num1, int *num2);

int main() {
    numeros alt;
    numeros *p1, *p2;
    
    p1 = &alt.num;
    p2 = &alt.num2;
    
    printf("Digite dois numeros:\n");
    scanf("%d", &alt.num);
    scanf("%d", &alt.num2);
    
   
    soma(p1, p2);
    
    printf("SOMA: %d\n", alt.num);
    printf("VALOR B: %d\n", alt.num2);
    
    return 0;
}

void soma(int *num1, int *num2){
    int soma;
    soma = *num1 + *num2;
    *num1 = soma;
}