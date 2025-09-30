#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long r, b, d;
        cin >> r >> b >> d;
        long long small = min(r, b);
        long long large = max(r, b);

        if (large <= (d + 1) * small)
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