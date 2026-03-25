#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool isDivisibleBy25(string &s) {
    int len = s.size();
    if(len < 2) return false;

    string lastTwoDigits = s.substr(len-2, 2);
    return (lastTwoDigits == "00" || lastTwoDigits == "25" || lastTwoDigits == "50" || lastTwoDigits == "75");
}

void solve() {
    int n; cin >> n;
    
    int del1 = 0; 
    string s = to_string(n);
    int len = s.size();
    while(!isDivisibleBy25(s) && len > 1) {
        if(s[len-1] == '5') {
            s.erase(len-2, 1);
            del1++;
        } else {
            s.erase(len-1, 1);
            del1++;
        }

        len = s.size();
    }

    int del2 = 0; 
    s = to_string(n);
    len = s.size();
    while(!isDivisibleBy25(s) && len > 1) {
        if(s[len-1] == '0') {
            s.erase(len-2, 1);
            del2++;
        } else {
            s.erase(len-1, 1);
            del2++;
        }

        len = s.size();
    }

    cout << min(del1, del2) << endl;
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
