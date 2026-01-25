#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int cntTwo = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 2) cntTwo++;
    }

    if(cntTwo % 2) {
        cout << -1 << endl;
        return;
    }

    int currCntTwo = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == 2) currCntTwo++;

        if(currCntTwo * 2 == cntTwo) {
            cout << i + 1 << endl;
            return;
        }
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
