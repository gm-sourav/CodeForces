#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        int diff = abs(a - b);

        int steps = (diff + 9) / 10;
        cout << steps << endl;
    }

    return 0;
}