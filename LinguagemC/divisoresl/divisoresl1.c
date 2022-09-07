#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num1;

    scanf("%d", &num1);

    for(int i = 1; i <= num1; i++){
        if(num1 % i == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}