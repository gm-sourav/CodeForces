#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (char &c : s)
        c = tolower(c);

    map<char, int> freq;
    for (char c : s)
    {
        if (c == 'e' || c == 'g' || c == 'y' || c == 'p' || c == 't')
            freq[c]++;
    }

    int ans = INT_MAX;
    string target = "egypt";
    for (char c : target)
    {
        ans = min(ans, freq[c]);
    }

    cout << ans << endl;
    return 0;
}
