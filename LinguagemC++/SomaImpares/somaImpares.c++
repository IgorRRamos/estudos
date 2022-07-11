#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, troca, soma;
    soma = 0;

    cout << "Digite dois numeros:\n";
    cin >> x >> y;

    if (x > y) {
        troca = x;
        x = y;
        y = troca;
    }

    for (int i = x + 1; i < y; i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }

    cout << "SOMA DOS IMPARES = " << soma << endl;

    return 0;
}