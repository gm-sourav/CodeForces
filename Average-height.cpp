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
        int arr[2005];
        int odd[2005], even[2005];
        int oc = 0, ec = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                even[ec++] = arr[i];
            }
            else
            {
                odd[oc++] = arr[i];
            }
        }

        
        for (int i = 0; i < oc; i++)
            cout << odd[i] << " ";
        for (int i = 0; i < ec; i++)
            cout << even[i] << " ";
        cout << "\n";
    }
    return 0;
}
