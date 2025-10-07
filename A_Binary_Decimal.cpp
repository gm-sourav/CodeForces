#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        char max_digit = '0';
        for (char c : n) {
            if (c > max_digit) max_digit = c;
        }
        cout << (max_digit - '0') << endl;
    }
    return 0;
}
