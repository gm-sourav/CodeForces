#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long p = 1LL << (63 - __builtin_clzll(n)); 
        cout << p - 1 << "\n";
    }
    return 0;
}
