#include <iostream>
#include <iomanip>

#define PI 3.14159

using namespace std;

int main() {
    double A, B, C;

    cin >> A >> B >> C;
    
    cout << "TRIANGULO: " << fixed << setprecision(3) << A*C/2.0 << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << PI * C *C << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << ((A+B)/2.0) * C << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << B*B << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << A*B << endl;


    return 0;
}