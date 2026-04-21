#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, m; cin >> n >> m;

    vector<int> a(n);
    for(int i = 1; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b(n);
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    sort(b.begin(), b.end());

    for(int i = 1; i <= m; i++) {
        a[0] = i;

        sort(a.begin(), a.end());
        int a_ptr = 0, b_ptr = 0;

        int k = 0;
        while(a_ptr < n && b_ptr < n) {
            if(a[a_ptr] < b[b_ptr]) {
                a_ptr++;
                b_ptr++;
            } else {
                b_ptr++;
                k++;
            }
        }

        cout << k << endl;
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
