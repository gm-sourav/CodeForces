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
        int a[2 * n];
        for (int i = 0; i < n * 2; i++)
        {
            cin >> a[i];
        }
        int oc = 0;
        int ec = 0;
       
        for (int i = 0; i <n * 2; i++)
        {
            if (a[i] % 2 == 0)
            {
                ec++;
            } else {
                oc++;
            }
            
        }
        
        if ( oc == ec)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}