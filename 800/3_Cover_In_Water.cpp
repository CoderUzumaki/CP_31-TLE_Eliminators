#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

// #define int long long

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int emptyCells = 0;
    int consEmpty = 0;

    for(char c : s) {
        if(c == '.') {
            emptyCells++;
            consEmpty++;

            if(consEmpty >= 3) {
                cout << 2 << endl;
                return;
            }
        } else {
            consEmpty = 0;
        }
    }

    cout << emptyCells << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);

    int tc; cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}


/**
 * Time Complexity: O(n) per test case
 * Space Complexity: O(1)
 * 
 * Explanation:
 * If we have atleast 3 consecutive empty cells,
 * we can always fill the i-1 and i+1 cells with water,
 * which will automatically fill the i-th cell as well.
 * And then we will use the water in i-th cell to fill any other empty cells. (Action - 2)
 * So, we perform Acction 1 only twice.
 * In any other case, we will need to perform Action 1 for each empty cell.
 * Hence, the answer is either 2 or the number of empty cells.
 */