#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, m; cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));

    unordered_map<int, vector<int>> row_mp;
    unordered_map<int, vector<int>> col_mp;

    for(int r = 0; r < n; r++) {
        for(int c = 0; c < m; c++) {
            cin >> mat[r][c];

            row_mp[mat[r][c] ].push_back(r);
        }
    }

    for(int c = 0; c < m; c++) {
        for(int r = 0; r < n; r++) {
            col_mp[mat[r][c] ].push_back(c);
        }
    }

    int sum = 0;
    for(const auto& [col, vec] : row_mp) {
        int row_sum = 0, col_sum = 0; 
        for(int i = 1; i < vec.size(); i++) {
            row_sum += (vec[i]-vec[i-1])*i;
            col_sum += (col_mp[col][i] - col_mp[col][i-1])*i;

            sum += row_sum;
            sum += col_sum;
        }
    }

    cout << sum << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);

    int tc = 1;
    while (tc--) {
        solve();
    }

    return 0;
}
