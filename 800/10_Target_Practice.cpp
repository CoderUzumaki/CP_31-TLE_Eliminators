#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

// #define int long long

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

void solve() {
    const int n = 10;
    int points = 0;
    vector<vector<char>> grid(n, vector<char>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];

            if(grid[i][j] != 'X') continue;

            if(i < n/2) {
                if(j >= i && j < (n-i)) {
                    points += (i + 1);
                } else {
                    points += min(j + 1, n - j);
                }
            } else {
                if(j <= i && j >= (n - i - 1)) {
                    points += (n - i);
                } else {
                    points += min(j + 1, n - j);
                }
            }
        }
    }

    cout << points << endl;
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

/**
 * Time Complexity: O(N^2) for each test case
 * Space Complexity: O(N^2) for the grid
 * 
 * Explanation:
 * It is given to us, that the target board is a 10x10 grid.
 * We iterate through each cell of the grid.
 * if we get 'X', it means the target is hit.
 * Depending on the position of the cell, we calculate the points scored.
 * If the cell is in the upper or lower triangle, we check if it is within the
 * central diamond area to assign points accordingly.
 * Otherwise, we assign points based on the column position.
 */