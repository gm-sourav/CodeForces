#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        int mn = *min_element(a.begin(), a.end());
        int cnt = count(a.begin(), a.end(), mn);
        
        cout << n - cnt << "\n";
    }
    return 0;
}
