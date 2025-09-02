#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a[4];
        for (int i = 0; i < 4; i++) {
            cin >> a[i];
        }

        int w1 = max(a[0], a[1]);  
        int w2 = max(a[2], a[3]);  

       
        sort(a, a + 4);

        int top1 = a[3];  
        int top2 = a[2];  

        if ((w1 == top1 && w2 == top2) || (w1 == top2 && w2 == top1)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
