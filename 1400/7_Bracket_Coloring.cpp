#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int op = 0, cl = 0;
    for (char c : s) {
        if (c == '(') op++;
        else cl++;
    }

    if (op != cl) {
        cout << -1 << endl;
        return;
    }

    vector<int> res(n);
    stack<int> st_reg; // For regular: ( )
    stack<int> st_rev; // For reverse: ) (

    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            if (!st_rev.empty()) {
                res[i] = 2;
                st_rev.pop();
            } else {
                res[i] = 1;
                st_reg.push(i);
            }
        } else { // s[i] == ')'
            if (!st_reg.empty()) {
                res[i] = 1;
                st_reg.pop();
            } else {
                res[i] = 2;
                st_rev.push(i);
            }
        }
    }

    set<int> used_colors;
    for (int i = 0; i < n; i++) used_colors.insert(res[i]);

    if (used_colors.size() == 1) {
        cout << 1 << endl;
        for (int i = 0; i < n; i++) cout << 1 << (i == n - 1 ? "" : " ");
    } else {
        cout << 2 << endl;
        for (int i = 0; i < n; i++) cout << res[i] << (i == n - 1 ? "" : " ");
    }
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
