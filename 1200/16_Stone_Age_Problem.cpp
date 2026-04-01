#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, q; cin >> n >> q;

    vector<int> arr(n+1);
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    vector<int> lastUpdate(n+1, 0);
    int lastUpdateAll = 0;
    int globalVal;

    for(int t = 1; t <= q; t++) {
        int type; cin >> type;

        if(type == 1) {
            int i, x; cin >> i >> x;

            if(lastUpdate[i] < lastUpdateAll) {
                arr[i] = globalVal;
            }
            sum += (x - arr[i]);
            arr[i] = x;
            lastUpdate[i] = t;
        } else {
            int x; cin >> x;

            globalVal = x;
            lastUpdateAll = t;
            sum = n*x;
        }

        cout << sum << endl;
    }
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);

    int tc = 1;
    while (tc--) {
        solve();
    }

    return 0;
}
