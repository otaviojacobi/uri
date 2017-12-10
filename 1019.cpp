#include <iostream>

using namespace std;

int main() {
    unsigned long long int A, horas, minutos;
    cin >> A;

    horas = A/3600;
    A = A%3600;
    minutos = A/60;
    A = A%60;

    cout << horas << ":" << minutos << ":" << A << endl;

    return 0;
}