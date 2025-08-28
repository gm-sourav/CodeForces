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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (b[i] > a[i])
            {
                int temp = b[i];
                b[i] = a[i];
                a[i] = temp;
            }
        }
        int maxa = a[0];
        int maxb = b[0];
        for (int i = 0; i < n; i++)
        {
            if (a[i] > maxa)
            {
                maxa = a[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (b[i] > maxb)
            {
                maxb = b[i];
            }
        }

        cout << maxa * maxb << endl;
    }
}