#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int i = 0, j = n - 1;
    while(i < j) {
        if(s[i] != s[j]) {
            i++; j--;
            continue;
        }

        break;
    }

    cout << j - i + 1 << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

    int tc; cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
