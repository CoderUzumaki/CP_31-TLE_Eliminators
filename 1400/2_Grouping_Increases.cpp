#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;

    int v1 = INF, v2 = INF;
    int penalty = 0;

    for(int i = 0; i < n; i++) {
        int num; cin >> num;
        
        if(v1 > v2) swap(v1, v2);

        if(num <= v1) v1 = num;
        else if(num <= v2) v2 = num;
        else {
            v1 = num;
            penalty++;
        }
    }

    cout << penalty << endl;

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
