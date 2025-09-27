#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int lucky = 0;
        int x = a[i];

        while (x > 0)
        {
            int d = x % 10;
            if (d == 4 || d == 7)
                lucky++;
            x /= 10;
        }

        if (lucky <= k)
            count++;
    }

    cout << count << endl;
    return 0;
}
