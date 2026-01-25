#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int result = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if(i == 0) continue;
        if((a[i] % 2) == (a[i-1] % 2)) result++;
    }

    cout << result << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

    int tc; cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
