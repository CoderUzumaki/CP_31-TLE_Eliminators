#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, k; cin >> n >> k;

    int left = 0, cnt = 0;
    vector<int> arr(n);
    for(int right = 0; right < n; right++) {
        cin >> arr[right];

        if(right == 0) continue;
        
        if(arr[right]*2 > arr[right - 1]) {
            cnt += (right - left >= k)? 1 : 0; 
        } else {
            left = right;
        }
    }

    cout << cnt << endl;
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
