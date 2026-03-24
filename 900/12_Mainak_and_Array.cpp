#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for(int &a : arr) cin >> a;

    int maxDiff = 0;
    for(int i = 1; i < n; i++) {
        maxDiff = max(maxDiff, arr[i-1] - arr[i]);
        maxDiff = max(maxDiff, arr[i] - arr[0]);
        maxDiff = max(maxDiff, arr[n-1] - arr[i]);
    }

    cout << maxDiff << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

    int tc; cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
