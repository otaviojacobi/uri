#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    unsigned long long int X, Y;

    cin >> X >> Y;

    float prices[] = {4.0, 4.5, 5.0, 2.0, 1.5};

    cout << "Total: R$ " << fixed << setprecision(2) << Y*prices[X-1] << endl;
    
    return 0;
}