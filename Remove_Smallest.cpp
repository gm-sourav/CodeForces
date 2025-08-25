#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, f;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        f = 0;

        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] > 1)
            {
                f = 1;
                break;
            }
          
        }
          if (f == 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
    }
}