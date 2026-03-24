#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;

    vector<int> arr(n);
    for(int &a : arr) cin >> a;

    bool hasNonZeros = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            hasNonZeros = true;
        } else {
            if(hasNonZeros && i != n-1) {
                if(arr[i+1] != 0) {
                    cout << 2 << endl;
                    return;
                }
            }
        }
    }

    if(hasNonZeros) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
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
