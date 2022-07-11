#include <bits/stdc++.h>

using namespace std;

int main() {
    double base, height, area, perimeter, diagonal;

    cout << fixed << setprecision(4);
    cout << "Base do retnagulo: ";
    cin >> base;
    cout << "Altura do retangulo: ";
    cin >> height;

    area = base * height;
    perimeter = (base + height) * 2;
    diagonal = sqrt(pow(base, 2) + pow(height, 2));

    cout << "AREA = " << area << endl;
    cout << "PERIMETRO = " << perimeter << endl;
    cout << "DIAGONAL = " << diagonal << endl;

    return 0;
}