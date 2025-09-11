#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        while (true)
        {
            long long x = n, s = 0;
            while (x > 0)
            {
                s += x % 10;
                x /= 10;
            }
            if (__gcd(n, s) > 1)
            {
                cout << n << "\n";
                break;
            }
            n++;
        }
    }
    return 0;
}
