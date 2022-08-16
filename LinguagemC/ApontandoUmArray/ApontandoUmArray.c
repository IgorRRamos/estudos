#include <stdio.h>

int main() {
    int numeros[9], *p1;
    p1 = &numeros[0];
    
    for(int i = 0;i < 9; i++){
        scanf("%d\n", &numeros[i]);
    }
    for(int i = 0; i <= 10; i++, p1++){
        printf("%p\n", p1);
    }
    
    return 0;
}