#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int smallest = n + 1, largest = n + 1, current = n + 1;
    for(int i = 0; i < n; i++) {
        if(s[i] == '>') {
            current -= 1;
            
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
