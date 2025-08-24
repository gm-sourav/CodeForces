#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        long long sum = 0;

        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum == n)
        {
            cout << 0 << "\n";
        }
        else if (sum < n)
        {
            cout << 1 << "\n";
        }
        else
        {
            int x = sum - n;
            cout << x << "\n";
        }
    }
}