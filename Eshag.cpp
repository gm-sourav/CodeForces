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
        int n;
        cin >> n;
        int arr[n];

        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mn = min(mn, arr[i]);
        }

        int countMin = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == mn)
                countMin++;
        }

        cout << n - countMin << "\n";
    }

    return 0;
}
