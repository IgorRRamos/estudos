#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
        for (int i = 1, j = 60; j >= 0; i += 3, j -= 5) {
        printf("I=%d J=%d\n", i, j);
    }
    return 0;
}