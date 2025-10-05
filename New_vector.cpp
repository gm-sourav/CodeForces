#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    vector<int> B(n);

    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }

    vector<int> C;

    C.reserve(A.size() + B.size());
    C.insert(C.end(), B.begin(), B.end());
    C.insert(C.end(), A.begin(), A.end());

    for (int x : C)
    {
        cout << x << " ";
    }

    return 0;
}