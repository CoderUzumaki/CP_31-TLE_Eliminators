#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool check(vector<pair<int, int>>& segments, int k) {
    pair<int, int> range = {0, 0};
    for(int i = 0; i < segments.size(); i++) {
        range.first = range.first - k;
        range.second = range.second + k;

        range.first = max(range.first, segments[i].first);
        range.second = min(range.second, segments[i].second);

        if(range.first > range.second) {
            return false;
        }

    }

    return true;
}

void solve() {
    int n; cin >> n;

    vector<pair<int, int>> segments(n);
    for(int i = 0; i < n; i++) {
        int l, r; cin >> l >> r;
        segments[i] = {l, r};
    }

    int low = 0, hi = 1e9;
    int ans;
    while(low <= hi) {
        int k = low + (hi - low)/2;

        if(check(segments, k)) {
            ans = k;
            hi = k-1;
        } else {
            low = k+1;
        }
    }

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
