#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A, B;
    cin >> A;
    cin.ignore();
    cin >> B;
    
    cout << "MEDIA = " << fixed << setprecision(5) << (3.5*A + 7.5*B)/11.0 << endl;
    return 0;
}