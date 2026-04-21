#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;

    string t; cin >> t;
    vector<bool> isDeleted(n+1, false);
    int k = 0;

    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j += i) {
            if(t[j-1] == '1') break;

            if(!isDeleted[j]) k += i;
            isDeleted[j] = true;
        }
    }

    cout << k << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
