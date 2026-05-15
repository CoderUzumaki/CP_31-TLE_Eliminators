#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    vector<int> prefix;
    int prvIdx = -1;
    for(int i = 0; i < n; i++) {
        if(s[i] == '.') continue;
        
        if(prvIdx != -1) {
            int sz = prefix.size();
            int shifts = prefix[sz - 1] + sz*(i - prvIdx - 1);
            prefix.push_back(shifts);
        } else {
            prefix.push_back(0);
        }
        prvIdx = i;
    }

    int prvScore = 0, numStars = 0, minShifts = INF; 
    prvIdx = -1;

    for(int i = n-1; i >= 0; i--) {
        if(s[i] == '.') continue;
        
        if(prvIdx != -1) {
            prvScore += numStars * (prvIdx - i - 1);
        }
        numStars++;
        prvIdx = i;

        minShifts = min(minShifts, prvScore + prefix.back());
        prefix.pop_back();
    }

    cout << ((minShifts == INF)? 0 : minShifts) << endl;
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
