#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; int k; cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int maxLen = 1;
    int currLen = 1;

    for(int i = 0; i < n-1; i++) {
        if(arr[i + 1] - arr[i] <= k) {
            maxLen = max(maxLen, ++currLen);
        } else {
            currLen = 1;
        }
    }

    cout << n - maxLen << endl;
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
