#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, m; cin >> n >> m;
    vector<vector<int>> a(m, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[j][i];
        }
    }

    int totalPot = 0;
    for(int i = 0; i < m; i++) {
        sort(a[i].begin(), a[i].end());

        for(int j = 0; j < n; j++) {
            // jth number is larger than j numbers and smaller than n - 1 - j numbers
            // so it will be added to the pot j times and subtracted from the pot n - 1 - j times
            int contribution = ( a[i][j] * j ) - ( a[i][j] * (n - 1 - j) ); 

            totalPot += contribution;
        }
    }

    cout << totalPot << endl;
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

// Time Complexity: O(m * n log n) due to sorting each of the m arrays of size n.
// Space Complexity: O(m * n) for storing the input arrays.

// Intution:
// since we have to calculate absolute difference of each pair of numbers,
// where they are in the same column, we can sort each column and calculate the contribution of each number to the total pot.
// sorting will help us to easily calculate how many numbers are smaller and larger than the current number in the same column, which will allow us to calculate its contribution to the total pot efficiently.