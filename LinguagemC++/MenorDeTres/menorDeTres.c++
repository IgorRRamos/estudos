#include <bits/stdc++.h>

using namespace std;

int main() {
    int value1, value2, value3, smaller;

    cout << "Primeiro valor: ";
    cin >> value1;
    cout << "Segundo valor: ";
    cin >> value2;
    cout << "Terceiro valor: ";
    cin >> value3;

    if (value1 < value2 && value1 < value3) {
        smaller = value1;
    } else if (value2 < value3) {
        smaller = value2;
    } else {
        smaller = value3;
    }
    cout << "MENOR = " << smaller << endl;

    return 0;
}