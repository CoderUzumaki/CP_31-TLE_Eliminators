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

    sort(arr.begin(), arr.end());
    arr.push_back(LLONG_MAX);

    int ans = 0;
    int sets = 0;
    for(int i = 0; i < n; i++) {

        if(i != 0 && arr[i] - arr[i-1] > 1) {
            ans += sets;
            sets = 0;
        } 

        int cnt = 1;
        while(arr[i] == arr[i + 1]) {
            cnt++;
            i++;
        }

        if(cnt < sets) {
            ans += sets - cnt;
        } 
        sets = cnt;
    }

    ans += sets;
    cout << ans << endl;
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
