#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        if (N == 1)
            cout << 200 << endl;     
        else
            cout << 100 * N << endl;  
    }
    return 0;
}
