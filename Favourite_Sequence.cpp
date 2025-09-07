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
        int b[n];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int l = 0, r = n - 1;
        while (l <= r)
        {
            if (l == r)
                cout << b[l];
            else
                cout << b[l] << " " << b[r];
            if (l != r)
                cout << " ";
            l++;
            r--;
        }
        cout << "\n";
    }
}
