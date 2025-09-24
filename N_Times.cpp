#include <bits/stdc++.h>
using namespace std;
void fun(int x, char ch)
{
    for (int i = 0; i < x; i++)
    {
        cout << ch << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        fun(n,c);
    }

    return 0;
}