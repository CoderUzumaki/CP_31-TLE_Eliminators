#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, m; cin >> n >> m;

    int tmp = n;
    int cnt2 = 0, cnt5 = 0;

    while(tmp % 2 == 0) {
        tmp /= 2;
        cnt2++;
    }

    while(tmp % 5 == 0) {
        tmp /= 5;
        cnt5++;
    }

    int k = 1;
    while(k*2 <= m && cnt2 < cnt5) {
        k *= 2;
        cnt2++;
    }

    while(k*5 <= m && cnt5 < cnt2) {
        k *= 5;
        cnt5++;
    }

    while(k*10 <= m) {
        k *= 10;
    }

    if(k == 1) {
        cout << n * m << endl;
    } else {
        cout << n * k * (m / k) << endl;
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
