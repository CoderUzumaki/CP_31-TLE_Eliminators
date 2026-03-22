#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;

    if(k >= 25) {
        cout << "YES" << endl;
        return;
    }

    vector<int> freq(26, 0);
    for(char c : s) {
        freq[c - 'a']++;
    }

    for(int f : freq) {
        if(f % 2 == 1) {
            k--;

            if(k < -1) {
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

    int tc; cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
