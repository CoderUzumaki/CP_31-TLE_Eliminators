#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool checkCondition(const vector<int>& a, int i, int l, int r) {
    return ( a[i] < min(a[l], a[r]) || a[i] > max(a[l], a[r]) );
}

void solve() {
    int n; cin >> n;
    vector<int> a(n+2);
    a[0] = LLONG_MIN;
    a[n+1] = LLONG_MIN;

    for (int i = 1; i <= n; i++) cin >> a[i];

    int l = 1;
    for(int r = 2; r <= n; r++) {
        bool isPeak = (a[r] > a[r-1] && a[r] > a[r+1]);
        bool isValley = (a[r] < a[r-1] && a[r] < a[r+1]);

        if( isPeak || isValley ){
            if( checkCondition(a, r+1, l, r) || checkCondition(a, l-1, l, r+1) ) {
                l = r;
            } else {
                cout << l-1 << " " << r+1 << endl;
                return;
            }
        }
    }

    cout << -1 << endl;
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
