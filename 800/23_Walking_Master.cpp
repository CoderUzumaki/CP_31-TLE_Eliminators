#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int xs, ys, xd, yd; cin >> xs >> ys >> xd >> yd;

    int deltaY = yd - ys;
    int deltaX = xd - (xs + deltaY);

    if(deltaY < 0 || deltaX > 0) {
        cout << -1 << endl;
        return;
    }

    cout << deltaY - deltaX << endl;
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
