#include <stdio.h>

typedef struct{
    int num, num2;
}numeros;

void maior(int *num1, int *num2);

int main() {
    numeros alt;
    numeros *p1, *p2;
    
    p1 = &alt.num;
    p2 = &alt.num2;
    
    printf("Digite dois numeros:\n");
    scanf("%d", &alt.num);
    scanf("%d", &alt.num2);
    
   
    maior(p1, p2);
    
    printf("MAIOR: %d\n", alt.num);
    printf("MENOR: %d\n", alt.num2);
    
    return 0;
}

void maior(int *num1, int *num2){
    
    if(*num1 < *num2){
    int troca = *num1;
    *num1 = *num2;
    *num2 = troca;
    }
}