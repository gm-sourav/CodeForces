#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n];
    int B[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        B[i] = A[i];
    }

    for (int i = 0; i < n; i++)
    {
        A[i] = B[n - 1 - i];
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] != B[i])
        {
            cout << "NO";
            return 0;        }
    }

    cout << " YES" << endl;
}
