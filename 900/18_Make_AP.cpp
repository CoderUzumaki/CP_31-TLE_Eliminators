#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int a, b, c; cin >> a >> b >> c;
    int m;

    if((2*b - c) % a == 0) {
        m = (2*b - c) / a; 

        if(m > 0) {
            cout << "YES" << endl;
            return;
        }
    }

    if((a + c) % (2*b) == 0) {
        m = (a + c) / (2*b); 

        if(m > 0) {
            cout << "YES" << endl;
            return;
        }
    }

    if((2*b - a) % c == 0) {
        m = (2*b - a) / c; 

        if(m > 0) {
            cout << "YES" << endl;
            return;
        }
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
