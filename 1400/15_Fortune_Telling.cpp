#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, x, y; cin >> n >> x >> y;
    
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        int num; cin >> num;
        sum = (sum + num)%2;
    }

    x = x%2; y = y%2;
    if((sum == 0 && x == y) || (sum != 0 && x != y)) cout << "Alice";
    else cout << "Bob";

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
