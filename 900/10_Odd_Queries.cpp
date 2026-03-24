#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, q; cin >> n >> q;

    vector<int> prefixSum(n+1);
    prefixSum[0] = 0;
    for(int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        prefixSum[i+1] = prefixSum[i] + tmp;
    }
    
    for(int i = 0; i < q; i++) {
        int l, r, k; cin >> l >> r >> k;
    
        int sum = prefixSum[r] - prefixSum[l-1];
        int len = r - l + 1;
    
        int newSum = prefixSum[n] - sum + (len * k);
        if(newSum % 2 == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

    int tc; cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
