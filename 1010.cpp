#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    unsigned long long int A, B;
    double C, sum = 0;

    cin >> A;
    cin >> B;
    cin >> C;

    sum = B*C;

    cin >> A;
    cin >> B;
    cin >> C;

    sum += B*C;

    
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << sum << endl;
    return 0;
}