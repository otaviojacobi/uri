#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long int A, B, C;

    cin >> A >> B >> C;
    
    cout << max(max(A,B), C) << " eh o maior" << endl;

    return 0;
}