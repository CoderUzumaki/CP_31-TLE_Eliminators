#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

// #define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;
    
    vector<pair<int, int>> edges(n-1);
    for(int i = 0; i < n-1; i++) {
        int u, v; cin >> u >> v;
        edges[i] = {u, v};
    }

    vector<bool> drawn_vertices(n+1, false);
    drawn_vertices[1] = true;
    int rem_edges = n-1;
    int itr = 0;

    while(rem_edges > 0) {
        itr += 1;
        vector<pair<int, int>> updated_edges;

        for(auto edge : edges) {
            if(drawn_vertices[edge.first] && !drawn_vertices[edge.second]) {
                drawn_vertices[edge.second] = true;
                rem_edges--;
            } else {
                updated_edges.push_back(edge);
            }
        }

        edges = updated_edges;
    }

    cout << itr << endl;
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
