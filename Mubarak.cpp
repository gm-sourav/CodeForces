#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S;
        cin >> S;

        int legal = 0;
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] == 'N' || S[i] == 'W' || S[i] == 'D')
            {
                continue;
            }
            else
            {
                legal++;
            }
        }

        int overs = legal / 6;
        int balls = legal % 6;

        if (overs > 0)
        {
            cout << overs << " OVER";
            if (overs > 1)
                cout << "S";
        }

        if (balls > 0)
        {
            if (overs > 0)
                cout << " ";
            cout << balls << " BALL";
            if (balls > 1)
                cout << "S";
        }

        if (overs == 0 && balls == 0)
        {
            cout << "0 BALLS";
        }

        cout << endl;
    }
    return 0;
}
