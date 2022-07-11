#include <math.h>
#include <stdio.h>

int main() {
    double X1, X2, Y1, Y2, distance;

    scanf("%lf %lf", &X1, &Y1);
    scanf("%lf %lf", &X2, &Y2);

    distance = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));

    printf("%.4lf\n", distance);

    return 0;
}