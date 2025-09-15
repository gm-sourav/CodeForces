#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n))
        return 0;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    vector<long long> pref(n);
    pref[0] = a[0];
    for (int i = 1; i < n; ++i)
        pref[i] = pref[i - 1] + a[i];

    int m;
    cin >> m;
    while (m--)
    {
        long long q;
        cin >> q;

        auto it = lower_bound(pref.begin(), pref.end(), q);
        int idx = int(it - pref.begin()) + 1;
        cout << idx << '\n';
    }
    return 0;
}
