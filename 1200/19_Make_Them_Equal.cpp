#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;
    char c; cin >> c;
    string s; cin >> s;

    bool isEqual = true;
    for(int i = 0; i < n; i++) {
        if(s[i] != c) {
            isEqual = false;
            break;
        }
    }
    if(isEqual) {
        cout << 0 << endl;
        return;
    }

    for (int i = 1; i <= n; i++) {
        bool ok = true;
        for (int j = i; j <= n; j += i) {
            if (s[j - 1] != c) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << 1 << endl << i << endl;
            return;
        }
    }

    cout << 2 << endl;
    cout << n-1 << " " << n << endl;
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
