#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int cont = 1, num, Z, cont1;

    scanf("%d", &num);
    scanf("%d", &Z);

    while(Z <= num){
        scanf("%d", &Z);
    }

    cont1 = num + 1;

    while(num < Z){
        num += cont1;
        cont1++;
        cont ++;
    }

    printf("%d\n", cont);




    return 0;
}