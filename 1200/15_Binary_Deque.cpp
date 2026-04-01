#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void solve() {
    int n, s; cin >> n >> s;

    int arraySum = 0;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        arraySum += a[i];
    }

    if(arraySum < s) {
        cout << -1 << endl;
        return;
    }

    int left = 0, right = 0;
    int sum = a[0], minOps = n-1;

    while(right < n && left <= right) {
        if(sum == s) minOps = min(minOps, n - (right - left) - 1);

        if(sum <= s) {
            right++;
            if(right < n) sum += a[right];
        } else {
            sum -= a[left];
            left++;
        }
    }

    cout << minOps << endl;
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
