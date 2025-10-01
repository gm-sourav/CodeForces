#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        if ((s[n-1] - '0') % 2 == 0) {
            cout << 0 << '\n';
            continue;
        }
        bool anyEven = false;
        for (char c : s) if ((c - '0') % 2 == 0) { anyEven = true; break; }
        if (!anyEven) {
            cout << -1 << '\n';
            continue;
        }
        if ((s[0] - '0') % 2 == 0) cout << 1 << '\n';
        else cout << 2 << '\n';
    }
}
