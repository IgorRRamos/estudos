#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char name1[50] = "Felipe", name2[] = "Soares";
    char *p1 = &name1, *p2 = &name2;

    for (; *p1; p1++)
        
    for (; *p2; p2++, p1++)
        *p1 = *p2;

    *p1 = '\0';

    printf("%s", name1);

    return 0;
}
