#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        set<char> solved;
        int balloons = 0;

        for (char c : s)
        {
            if (solved.count(c) == 0)
            {
                balloons += 2;
                solved.insert(c);
            }
            else
            {
                balloons += 1;
            }
        }

        cout << balloons << "\n";
    }
    return 0;
}
