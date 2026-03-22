#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int a, b, n; cin >> a >> b >> n;
    vector<int> arr(n);
    int time = b - n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];

        time += min(arr[i] + 1, a);
    }

    cout << time << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

    int tc; cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
