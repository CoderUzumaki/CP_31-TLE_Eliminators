#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, k; cin >> n >> k;
    
    vector<vector<int>> adj(k + 1, {-1});
    for(int i = 0; i < n; i++) {
        int c; cin >> c;
        adj[c].push_back(i);
    }

    int globalMin = n;

    for(int i = 1; i <= k; i++) {
        adj[i].push_back(n);

        int max1 = -1, max2 = -1;

        for(int j = 1; j < adj[i].size(); j++) {
            int gap = adj[i][j] - adj[i][j-1] - 1;

            if(gap > max1) {
                max2 = max1;
                max1 = gap;
            } else if(gap > max2) {
                max2 = gap;
            }
        }

        int localMax = max(max1 / 2, max2);
        globalMin = min(globalMin, localMax);
    }

    cout << globalMin << endl;
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
// Space Complexity: O(n)  # Not accounting input storage

// Intution:
// Since vika can walk only on planks of same color,
// we calculate the gaps between the planks of same color
// and since, vika can paint at max one plank, we can reduce the 
// largest gap by half.
// thus, for a given color: max jump/skip is max(gap1/2, gap2) where gap1 and gap2 are the largest and second largest gaps between the planks of that color.
// we calculate the max jump/skip for each color and take the minimum of them as the answer.