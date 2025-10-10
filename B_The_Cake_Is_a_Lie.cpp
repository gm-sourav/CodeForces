#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        // cout << (k == n * m - 1 ? "YES\n" : "NO\n");
        if (k == n * m - 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
