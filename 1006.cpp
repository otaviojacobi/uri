#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A, B, C;
    cin >> A;
    cin.ignore();
    cin >> B;
    cin.ignore();
    cin >> C;
    
    cout << "MEDIA = " << fixed << setprecision(1) << (2*A + 3*B + 5*C)/10.0 << endl;
    return 0;
}