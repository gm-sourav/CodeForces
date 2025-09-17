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
        long long arr[n];
        long long sum = 0, maxVal = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
            if (arr[i] > maxVal) maxVal = arr[i];
        }

        
        long double result = maxVal + (long double)(sum - maxVal) / (n - 1);
        cout << fixed << setprecision(9) << result << "\n";
    }

    return 0;
}
