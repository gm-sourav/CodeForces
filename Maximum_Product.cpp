#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long arr[100005];
        for (int i = 0; i < n; i++) cin >> arr[i];

        sort(arr, arr + n);

        long long ans = LLONG_MIN;
        ans = max(ans, arr[n-1] * arr[n-2] * arr[n-3] * arr[n-4] * arr[n-5]);
        ans = max(ans, arr[0] * arr[1] * arr[n-1] * arr[n-2] * arr[n-3]);
        ans = max(ans, arr[0] * arr[1] * arr[2] * arr[3] * arr[n-1]);
        ans = max(ans, arr[0] * arr[1] * arr[2] * arr[3] * arr[4]);

        cout << ans << "\n";
    }
}
