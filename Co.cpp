#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int xA, yA, xB, yB, xF, yF;
        cin >> xA >> yA >> xB >> yB >> xF >> yF;

        int dist = abs(xA - xB) + abs(yA - yB);

        if (yA == yB && yA == yF)
        {
            if (min(xA, xB) < xF && xF < max(xA, xB))
            {
                dist += 2;
            }
        }

        if (xA == xB && xA == xF)
        {
            if (min(yA, yB) < yF && yF < max(yA, yB))
            {
                dist += 2;
            }
        }

        cout << dist << "\n";
    }
    return 0;
}
