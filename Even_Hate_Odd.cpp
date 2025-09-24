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
        int a[n];
        int ec = 0;
        int oc = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                ec++;
            }
            else
            {
                oc++;
            }
        }
        if (n % 2 == 0)
        {
            cout << abs(ec - oc) / 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}


