#include <stdio.h>
#include <stdlib.h>

int main() {
    int quantidade, num, in, out;

    scanf("%d", &quantidade);
    in = 0;
    out = 0;

    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &num);
        
        if ((num >= 10) && (num <= 20)) {
            in++;
        } else {
            out++;
        }
    }

    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}
