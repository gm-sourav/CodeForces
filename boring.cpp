#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char ch[10];
        cin >> ch;
        int d = ch[0] - '0';
        int len = strlen(ch);

        int result = (d - 1) * 10 + (len * (len + 1)) / 2;
        cout << result << endl;
    }
}