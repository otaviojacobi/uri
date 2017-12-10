#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long int A;
    cin >> A;
    cout << A << endl;

    int notes[] = {100, 50, 20, 10, 5, 2, 1};

    long long int rest;

    for(unsigned int i = 0; i < 7; i++) {

        rest = A/notes[i];
        A = A%notes[i];

        cout << rest << " nota(s) de R$ " << notes[i] << ",00" << endl;        
    }
    return 0;
}