#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mn = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mn)
        {
            mn = arr[i];
        }
    }

    int fre = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == mn)
        {
            fre++;
        }
    }

    if (fre % 2 == 1)
    {
        cout << "Lucky" << endl;
    }
    else
    {
        cout << "Unlucky" << endl;
    }
}