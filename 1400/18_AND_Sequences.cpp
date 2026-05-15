#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int factorial(int num) {
    int fact = 1;
     
    for(int i = 2; i <= num; i++) {
        fact = (fact * i) % MOD;
    }

    return fact;
}

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    
    for(int& i : arr) {
        cin >> i;
    }

    int min_ele = *min_element(arr.begin(), arr.end());
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if((arr[i] & min_ele) != min_ele) {
            cout << 0 << endl;
            return;
        }

        if(arr[i] == min_ele) cnt++;
    }
    
    int ans = (cnt * (cnt-1)) % MOD;
    ans = (ans * factorial(n-2)) % MOD;
    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

    int tc; cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
