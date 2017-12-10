#include <iostream>
#include <iomanip>

using namespace std;

#define PI 3.14159

int main() {
    double R;
    cin >> R;
    
    cout << "A=" << fixed << setprecision(4) << R*R*PI << endl;
    return 0;
}