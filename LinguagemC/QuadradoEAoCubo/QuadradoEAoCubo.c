#include <stdio.h>


int main() {
    int num1, num2, num3, num4, num5, num6;

    scanf("%d", &num1);

    for (num2 = 1; num2 <= num1; num2++) {

        num3 = num2 * num2;
        num4 = num2 * num2 * num2;

        printf("%d %d %d\n", num2, num3, num4);
        num5 = num3 + 1;
        num6 = num4 + 1;

        printf("%d %d %d\n", num2, num5, num6);
    }
    
    return 0;
}