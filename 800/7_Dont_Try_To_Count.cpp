#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

// #define int long long
#define sz(x) ((int)(x).size())

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

void solve() {
    int n, m; cin >> n >> m;
    string x;  cin >> x;
    string s; cin >> s;

    int rep = 0;
    while(sz(x) < m) {
        x += x;
        rep++;
    }

    if(x.find(s) != string::npos) {
        cout << rep << endl;
        return;
    }

    x += x;
    if(x.find(s) != string::npos) {
        cout << rep + 1 << endl;
        return;
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


/**
 * Time Complexity: O(M * max(N, M))
 * Space Complexity: O(N + M)
 * 
 * Explanation:
 * We keep doubling the string x until its length is at least m (length of s).
 * We count the number of doublings in rep.
 * Then we check if s is a substring of x. If it is, we print rep.
 * If not, we double x one more time and check again. If s is found, we print rep + 1.
 * If s is still not found, we print -1, as it's impossible for s to be a substring of any further doublings of x.
 */