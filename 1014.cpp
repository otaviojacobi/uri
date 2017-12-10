#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    unsigned long long int A;
    double B;

    cin >> A >> B;
    
    cout  << fixed << setprecision(3) << (double)A/B << " km/l" << endl;

    return 0;
}