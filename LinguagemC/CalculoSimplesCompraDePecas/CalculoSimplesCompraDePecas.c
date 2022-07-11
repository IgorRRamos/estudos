#include <stdio.h>

int main() {
    int codePiece1, codePiece2, qtd1, qtd2;
    double valuePiece1, valuePiece2, valuePay;
    valuePay = 0;

    scanf("%d %d %lf", &codePiece1, &qtd1, &valuePiece1);
    valuePay = qtd1 * valuePiece1;

    scanf("%d %d %lf", &codePiece2, &qtd2, &valuePiece2);
    valuePay = valuePay + qtd2 * valuePiece2; 

    printf("VALOR A PAGAR: R$ %.2lf\n", valuePay);

    return 0;
}