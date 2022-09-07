#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num1;

    printf("DIGITE UM NUMERO: ");
    scanf("%d", &num1);

    for(int i = num1 - 1; i >= 1; i--){
        num1 = num1 * i;
    }
    
    printf("FATORIAL: %d\n", num1);


    return 0;
}