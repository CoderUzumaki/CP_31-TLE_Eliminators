#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<vector<int>> findAttackPositions(int x, int y, int a, int b) {
    vector<vector<int>> positions;

    int delta[] = {a, b};

    for(int i = 0; i < 2; i++) {
        if(a == b && i == 1) break;

        for(int j = 0; j < 2; j++) {
            if(i == j) continue;

            positions.push_back({x + delta[i], y + delta[j]});
            positions.push_back({x - delta[i], y + delta[j]});
            positions.push_back({x + delta[i], y - delta[j]});
            positions.push_back({x - delta[i], y - delta[j]});
        }
    }

    return positions;
}

void solve() {
    int a, b; cin >> a >> b;
    int xk, yk; cin >> xk >> yk;
    int xq, yq; cin >> xq >> yq;

    vector<vector<int>> canAttackOnKing = findAttackPositions(xk, yk, a, b);
    vector<vector<int>> canAttackOnQueen = findAttackPositions(xq, yq, a, b);

    int cnt = 0;
    for (auto &pos : canAttackOnKing) {
        for (auto &qpos : canAttackOnQueen) {
            if (pos[0] == qpos[0] && pos[1] == qpos[1]) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
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
