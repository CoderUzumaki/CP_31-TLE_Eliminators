#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int size = 1;
    int order = 0; // 0 for unknown, 1 for increasing, -1 for decreasing

    for(int i = 1; i < n; i++) {
        if(a[i] == a[i-1]) continue;

        if((a[i] > a[i-1]) && (order == -1)) {
            size++;
        } else if((a[i] < a[i-1]) && (order == 1)) {
            size++;
        } 

        order = (a[i] > a[i-1])? 1 : -1;
    }

    cout << ((order == 0)? size : ++size) << endl;
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


// Time Complexity: O(n)
// Space Complexity: O(1)  # Not accounting input storage

// Intution:
// The intermediate elements of a montonic sequence do not add unique contrast.
// So we can ignore them and only consider the elements where the order changes.
// the order changes at peak and valley points.