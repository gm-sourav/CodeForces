#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i] + 1 == v[j])
            {
                count++;
                break;
            }
        }
    }
    cout << count << endl;

    return 0;
}