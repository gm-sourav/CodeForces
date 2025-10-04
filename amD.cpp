#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        long long a1, a2, a3;
        cin >> a1 >> a2 >> a3;
        long long s = llabs(a1 + a3 - 2 * a2);
        cout << (s % 3 == 0 ? 0 : 1) << '\n';
    }
    return 0;
}
