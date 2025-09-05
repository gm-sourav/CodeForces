#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n];   
        int c1 = 0, c2 = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 1)
                c1++;
            else
                c2++;
        }

        if ((c1 == 1 && c2 == 1) || (c1 == 0 && c2 % 2 != 0) || (c1 % 2 != 0 && c2 == 0)) {
            cout << "NO" << endl;
        }
        else if ((c1 == c2 && c1 % 2 == 0) || (c1 % 2 == 0 && c2 % 2 == 0)) {
            cout << "YES" << endl;
        }
        else {
            if (abs(c1 - (c2 * 2)) % 2 == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}
