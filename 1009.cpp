#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string A;
    double B, C;
    cin >> A;
    cin >> B;
    cin.ignore();
    cin >> C;
    
    cout << "TOTAL = R$ " << fixed << setprecision(2) << B + 0.15*C << endl;
    return 0;
}