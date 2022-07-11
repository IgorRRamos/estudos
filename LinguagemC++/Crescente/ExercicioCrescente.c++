#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, trade;

    cout << "Digite dois numeros:" << endl;
    cin >> x >> y;

    while (x != y) {
        if (x < y) {
            cout << "CRESCENTE!\n";
        } else {
            cout << "DECRESCENTE!\n";
        }
        cout << "Digite dois numeros:" << endl;
        cin >> x;
        cin >> y;
    }

    return 0;
}