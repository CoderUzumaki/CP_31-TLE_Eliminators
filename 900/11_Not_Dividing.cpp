#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;
    
    vector<int> arr(n);
    for(int &a : arr) cin >> a;

    int ops = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 1) {
            // ops++;
            arr[i]++;
        }

        if(i != 0 && arr[i] % arr[i-1] == 0) {
            // ops++;
            arr[i]++;
        }

        cout << arr[i] << " ";
    }
    // cout << "ops = " << ops;
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
