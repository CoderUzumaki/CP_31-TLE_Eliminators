#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k; 
    cin >> n >> k;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    // Case 1: k >= 3 always results in 0
    if (k >= 3) {
        cout << 0 << "\n";
        return;
    }

    sort(a.begin(), a.end());

    // Initial min is the smallest element already in the array
    int ans = a[0];

    // Case 2: Check k = 1 logic (min difference between any two elements)
    for (int i = 0; i < n - 1; i++) {
        ans = min(ans, a[i + 1] - a[i]);
    }

    if (k == 1) {
        cout << ans << "\n";
        return;
    }

    // Case 3: k = 2 logic
    // We check if |(a[i] - a[j]) - a[l]| can be smaller than current ans
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = a[j] - a[i];
            
            // Binary search for the element closest to 'diff'
            auto it = lower_bound(a.begin(), a.end(), diff);
            
            // Check element at it and it-1
            if (it != a.end()) {
                ans = min(ans, *it - diff);
            }
            if (it != a.begin()) {
                ans = min(ans, diff - *(--it));
            }
        }
    }

    cout << ans << "\n";
}

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int tc; 
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}