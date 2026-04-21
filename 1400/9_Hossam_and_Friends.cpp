#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, m; cin >> n >> m;

    vector<int> firstUnknown(n+1, n+1);
    for(int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;

        firstUnknown[min(u, v)] = min(firstUnknown[min(u, v)], max(u, v));
    }

    int totalGoodSeg = 0;
    for(int i = n; i > 0; i--) {
        totalGoodSeg += (firstUnknown[i] - i);
        firstUnknown[i-1] = min(firstUnknown[i-1], firstUnknown[i]);
    }

    cout << totalGoodSeg << endl;
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
