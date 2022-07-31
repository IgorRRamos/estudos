#include <stdio.h>
#include <string.h>

int main() {
    char a[20], b[20], c[20];
    char a1[] = "vertebrado", a2[] = "invertebrado";
    char b1[] = "ave", b2[] = "mamifero", b3[] = "inseto", b4[] = "anelideo";
    char c1[] = "carnivoro", c2[] = "onivoro", c3[] = "herbivoro", c4[] = "hematofago";

    scanf("%s", &a);
    scanf("%s", &b);
    scanf("%s", &c);

    if ((0 == strcmp(a, a1)) && (0 == strcmp(b, b1)) && (0 == strcmp(c, c1))) 
        printf("aguia\n");
     else if ((0 == strcmp(a, a1)) && (0 == strcmp(b, b1)) && (0 == strcmp(c, c2))) 
        printf("pomba\n");
    
    if ((0 == strcmp(a, a1)) && (0 == strcmp(b, b2)) && (0 == strcmp(c, c2))) 
        printf("homem\n");
     else if ((0 == strcmp(a, a1)) && (0 == strcmp(b, b2)) && (0 == strcmp(c, c3))) 
        printf("vaca\n");
    

    if ((0 == strcmp(a, a2)) && (0 == strcmp(b, b3)) && (0 == strcmp(c, c4))) 
        printf("pulga\n");
    else if ((0 == strcmp(a, a2)) && (0 == strcmp(b, b3)) && (0 == strcmp(c, c3))) 
        printf("lagarta\n");
    
    if ((0 == strcmp(a, a2)) && (0 == strcmp(b, b4)) && (0 == strcmp(c, c4))) 
        printf("sanguessuga\n");
    else if ((0 == strcmp(a, a2)) && (0 == strcmp(b, b4)) && (0 == strcmp(c, c2))) 
        printf("minhoca\n");
    
        return 0;
    }