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

    // time complexity : O(n), but sometimes it can be O(n^2) in worst case when all elements are distinct, due to hashcollisions
    // int maxfreq = 0;
    // unordered_map<int, int> freq;
    // for(int a : arr) {
    //     freq[a]++;
    //     maxfreq = max(maxfreq, freq[a]);
    // }

    sort(arr.begin(), arr.end());

    int maxfreq = 1, current_freq = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i-1]) current_freq++;
        else current_freq = 1;
        maxfreq = max(maxfreq, current_freq);
    }

    int ops = 0;
    int req = n - maxfreq;

    while(req > 0) {
        int swaps = min(maxfreq, req);
        req -= swaps;
        maxfreq *= 2;

        ops += (swaps + 1); // + 1 for clone operation
    }

    cout << ops << endl;
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
