#include <iostream>
#include <iomanip>

#define PI 3.14159

using namespace std;

int main() {
    unsigned long long int R;

    cin >> R;
    
    cout << "VOLUME = " << fixed << setprecision(3) << 4/3.0 * PI * R * R * R  << endl;
    return 0;
}