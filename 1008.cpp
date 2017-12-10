#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long unsigned int A, B;
    double C;
    cin >> A;
    cin.ignore();
    cin >> B;
    cin.ignore();
    cin >> C;
    
    cout << "NUMBER = " << A << endl << "SALARY = U$ " << fixed << setprecision(2) << double(B)*C << endl;
    return 0;
}