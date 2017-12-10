#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long int A, B;
    cin >> A >> B;
    
    cout << fixed << setprecision(3) << A*B/12.0 << endl;
    return 0;
}