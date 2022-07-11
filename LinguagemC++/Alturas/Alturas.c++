#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    double sum, average, smallAge, sumAge;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    string name[n];
    int age[n];
    double height[n];

    for (int i = 0; i < n; i++) {
        cout << "Dados da " << i + 1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, name[i]);
        cout << "Idade: ";
        cin >> age[i];
        cout << "Altura: ";
        cin >> height[i];
    }

    sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + height[i];
    }
    average = sum / n;
    cout << fixed << setprecision(2) << endl;
    cout << "Altura media: " << average;

    for (int i = 0; i < n; i++) {
        if (age[i] < 16) {
            sumAge++;
        }
    }
    smallAge = sumAge * 100.0 / n;
    cout << fixed << setprecision(1) << endl;
    cout << "Pessoas com menos de 16 anos: " << smallAge << "%" << endl;

    for (int i = 0; i < n; i++) {
        if (age[i] < 16) {
            cout << name[i] << endl;
        }
    }

    return 0;
}