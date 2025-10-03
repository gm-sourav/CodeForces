#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;
        long long b = max(l, (r / 2) + 1);
        cout << r % b << endl;
    }

    return 0;
}