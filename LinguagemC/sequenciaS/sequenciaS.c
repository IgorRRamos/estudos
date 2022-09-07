#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double s = 1;

    for(int i = 2; i <= 100; i++){
        s+= 1.00 / i;
    }
    printf("%.2f\n", s);

    return 0;
}