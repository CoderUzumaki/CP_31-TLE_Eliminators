#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    string s; cin >> s;
    int n = s.size();

    int balance = 0; // ab: +1, ba: -1  
    for(int i = 1; i < n; i++) {
        if(s[i-1] == 'a' && s[i] == 'b') balance++;
        else if(s[i-1] == 'b' && s[i] == 'a') balance--;
    }   

    if(s[0] == 'a' && balance > 0) {
        s[0] = 'b';
        balance -= 1;
    }

    if(s[0] == 'b' && balance < 0) {
        s[0] = 'a';
        balance += 1;
    }

    if(s[n-1] == 'a' && balance > 0) {
        s[0] = 'b';
        balance += 1;
    }

    if(s[0] == 'b' && balance < 0) {
        s[0] = 'a';
        balance -= 1;
    }

    cout << s << endl;  
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
