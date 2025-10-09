#include <bits/stdc++.h>
using namespace std;

struct DSU {
    vector<int> p;
    DSU(int n) { p.resize(n); iota(p.begin(), p.end(), 0); }
    int find(int x) { return p[x] == x ? x : p[x] = find(p[x]); }
    void unite(int a, int b) { p[find(a)] = find(b); }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        DSU dsu(n);

        // Step 1: Merge equal positions
        for (int i = 0; i < n; i++) {
            int j = (i + 1) % n;
            if (s[i] == 'E') dsu.unite(i, j);
        }

        // Step 2: Check inequalities
        bool ok = true;
        for (int i = 0; i < n; i++) {
            int j = (i + 1) % n;
            if (s[i] == 'N' && dsu.find(i) == dsu.find(j)) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
