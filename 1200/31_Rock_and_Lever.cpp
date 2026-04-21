#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int calcMSB(int num) {
    int msb = 0;
    
    num /= 2;
    while(num != 0) {
        num /= 2;
        msb++;
    }

    return msb;
}

void solve() {
    int n; cin >> n;
    vector<int> msbFreq(64, 0);

    for(int i = 1; i <= n; i++) {
        int a; cin >> a;

        msbFreq[calcMSB(a)] += 1; 
    }

    int validPairs = 0;
    for(int f : msbFreq) {
        validPairs += ((f * (f-1)) / 2);
    }

    cout << validPairs << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

    int tc; cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
