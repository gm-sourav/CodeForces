#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S, Tword;
        cin >> S >> Tword;
        string M = "";
        for (int i = 0; i < 5; i++)
        {
            if (S[i] == Tword[i])
                M += 'G';
            else
                M += 'B';
        }
        cout << M << endl;
    }
    return 0;
}
