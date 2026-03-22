#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if(n % 2 == 0) {
        cout << 2 << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n << endl;
        return;
    }

    cout << 4 << endl;
    cout << 1 << " " << n-1 << endl;
    cout << 1 << " " << n-1 << endl;
    cout << n-1 << " " << n << endl;
    cout << n-1 << " " << n << endl;

}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

    int tc; cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
