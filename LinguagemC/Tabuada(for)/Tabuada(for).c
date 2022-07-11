#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int n, i, tab;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++){
        tab = n * i;
        printf("%d x %d = %d\n", n , i , tab);
    }
        return 0;
}