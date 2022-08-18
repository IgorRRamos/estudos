#include <stdio.h>

int main() {

    int num, num2, cont, cont1 = 0;
    scanf("%d %d", &num, &num2);

    while (num2 <= 0)
        scanf("%d", &num2);

    for (cont = 1; cont <= num2; cont++) {
        cont1 += num;
        num++;
    }
    
    printf("%d\n", cont1);
    return 0;
}