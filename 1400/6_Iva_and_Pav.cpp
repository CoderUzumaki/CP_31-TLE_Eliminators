#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;
     
    vector<vector<int>> a(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        cin >> a[i][i];
    }

    // pre-compute xor
    for(int i = n-2; i >= 0; i--) {
        for(int j = i+1; j < n; j++) {
            a[i][j] = a[i][i] & a[i+1][j];
        }
    }

    int q; cin >> q;
    for(int i = 0; i < q; i++) {
        int l, k; cin >> l >> k;
        l = l-1; // 0-indexing 
        auto it = upper_bound(a[l].begin() + l, a[l].end(), k, greater<int>());

        if(it != a[l].begin() + l) {
            int idx = distance(a[l].begin(), it);
            cout << idx << " ";
        } else {
            cout << -1 << " ";
        }
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
