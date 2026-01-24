#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

// #define int long long

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(auto num : a) {
        cout << n - num + 1 << " ";
    }
    cout << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);

    int tc; cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}


/**
 * Time Complexity: O(n) per test case
 * Space Complexity: O(n) for storing the permutation
 * 
 * Explanation:
 * We were asked to find a twin permutation for a given permutation of size n,
 * such that for every i, a[i] + b[i] <= a[i + 1] + b[i + 1]
 * Now, one way to do so is to make every sum equal. (equal to n + 1)
 * so, we add 1 to n, 2 to n - 1, and so on.
 * 
 * This gives us the twin permutation b as: 
 * b[i] = n - a[i] + 1
 */