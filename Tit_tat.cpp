#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++) cin >> a[i];

        
        for (int i = 0; i < n - 1 && k > 0; i++) {
            int take = min(a[i], k); 
            a[i] -= take;
            a[n - 1] += take;
            k -= take;
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
