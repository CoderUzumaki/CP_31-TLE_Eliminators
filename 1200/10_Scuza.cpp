#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, q; cin >> n >> q;
    
    vector<int> prefixSum(n, 0);
    vector<int> maxSoFar(n, 0);
    for(int i = 0; i < n;  i++) {
        int a; cin >> a;
        prefixSum[i] = a + (i > 0 ? prefixSum[i - 1] : 0);
        maxSoFar[i] = max(a, (i > 0 ? maxSoFar[i - 1] : 0));
    }

    for(int i = 0; i < q; i++) {
        int x; cin >> x;
        int idx = upper_bound(maxSoFar.begin(), maxSoFar.end(), x) - maxSoFar.begin() - 1;
        int height = (idx >= 0 ? prefixSum[idx] : 0);

        cout << height << " ";
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
