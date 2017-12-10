#include <iostream>

using namespace std;

int main() {
    unsigned long long int A, anos, meses;
    cin >> A;

    anos = A/365;
    A = A%365;
    meses = A/30;
    A = A%30;

    cout << anos << " ano(s)" << endl << meses << " mes(es)" << endl << A << " dia(s)" << endl;

    return 0;
}