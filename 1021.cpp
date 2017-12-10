#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double B;
    cin >> B;

    unsigned long long int A = B;

    int notes[] = {100, 50, 20, 10, 5, 2};
    int coins[] = {100, 50, 25, 10, 5, 1};

    long long int rest;


    cout << "NOTAS:" << endl;
    for(unsigned int i = 0; i < 6; i++) {

        rest = A/notes[i];
        A = A%notes[i];

        B -= rest*notes[i];

        cout << rest << " nota(s) de R$ " << notes[i] << ".00" << endl;        
    }



    unsigned long long int C = 100.0*B;

    cout << "MOEDAS:" << endl;
    for(unsigned int i = 0; i < 6; i++) {
        
        rest = C/coins[i];
        C = C%coins[i];

        cout << rest << " moeda(s) de R$ " << fixed << setprecision(2) << coins[i]/100.0 << endl;        
    }
    return 0;
}