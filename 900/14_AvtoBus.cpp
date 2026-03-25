#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;

    if(n < 4 || n % 2 == 1) {
        cout << -1 << endl;
        return;
    }

    if(n % 3 == 0) {
        cout << n/6 << " ";
    } else {
        cout << n/6 + 1 << " ";
    }

    cout << n/4 << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

    int tc; cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
