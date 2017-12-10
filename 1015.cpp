#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double A, B, C, D;

    cin >> A >> B >> C >> D;
    
    cout  << fixed << setprecision(4) << sqrt((C-A)*(C-A) + (D-B)*(D-B)) <<  endl;

    return 0;
}