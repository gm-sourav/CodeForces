#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;

        int g = 1; 
        for (int i = 1; i <= k && i <= 100; i++) {
            if (k % i == 0 && 100 % i == 0) {
                g = i;
            }
        }

        cout << 100 / g << endl;
    }
    return 0;
}
