#include <iostream>
#include <vector>
#include <algorithm>

// Function to solve a single test case
void solve() {
    int n;
    int d;
    std::cin >> n >> d;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    // Sort the array to easily find the smallest and largest elements
    std::sort(a.begin(), a.end());

    // a[0] is the smallest element
    // a[1] is the second smallest
    // a[n-1] is the largest

    // Condition 1: All elements are already <= d (checked by looking at the largest).
    // Condition 2: If not, can we make them smaller? The smallest possible new value
    // is the sum of the two smallest elements (a[0] + a[1]).
    if (a[n - 1] <= d || (a[0] + a[1] <= d)) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}

int main() {
    // Fast I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}