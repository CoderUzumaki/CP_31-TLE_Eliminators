#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;
    vector<int> x(n), y(n), d(n);
    for(int &i : x) cin >> i;
    for(int &i : y) cin >> i;
    
    for(int i = 0; i < n; i++) {
        d[i] = y[i] - x[i];
    }

    sort(d.begin(), d.end());

    int left = 0, right = n-1;
    int groups = 0;

    while(left < right) {
        if(d[left] + d[right] >= 0) {
            groups++;
            right--;
        }
        
        left++;
    }

    cout << groups << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);

    int tc; cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
