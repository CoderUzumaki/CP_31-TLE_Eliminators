#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, k, tSum; cin >> n >> k >> tSum;

    int currSum = (k * (k + 1)) / 2;
    if (currSum > tSum) {
        cout << "NO" << endl;
        return;
    }

    int rem = tSum - currSum;
    if(n >= (k + rem/k + min(1LL, rem % k))) {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
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
