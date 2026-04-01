#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;

    // check if it is in ascending order
    bool isOrdered = true;
    for(int i = 0; i < n-1; i++) {
        if(a[i] > a[i+1]) {
            isOrdered = false;
            break;
        }
    }

    if(isOrdered) {
        cout << 0 << endl;
        return;
    }

    
    int lastVal = a[n-1];
    int lastSecondVal = a[n-2];

    if((lastVal < lastSecondVal) || (lastVal < 0 && lastSecondVal < 0)) {
        cout << -1 << endl;
        return;
    }

    cout << n-2 << endl;
    for(int i = 1; i <= n-2; i++) {
        cout << i << " " << n-1 << " " << n << endl;
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
