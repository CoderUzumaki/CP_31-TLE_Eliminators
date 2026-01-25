#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    int cummulativeXor = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cummulativeXor ^= a[i];
    }

    if(n % 2 == 0) {
        if(cummulativeXor == 0) {
            cout << 0 << endl; // Any Value of x works
        } else {
            cout << -1 << endl;
        }

        return;
    } 

    cout << cummulativeXor << endl; // x must be equal to cummulativeXor
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
 * Time Complexity: O(n) per test case
 * Space Complexity: O(1)
 * 
 * Explanation:
 * we need to find an integer x such that:
 * (a1 XOR x) XOR (a2 XOR x) XOR ... XOR (an XOR x) = 0
 * and 0 <= x < 2^8
 * 
 * let S = a1 XOR a2 XOR ... XOR an
 * then the equation becomes:
 * S XOR (x XOR x ... n-times) = 0
 * if n is even, then x XOR x ... n-times = 0
 * so we have S = 0, which means any x works if S = 0, otherwise no x works
 * if n is odd, then x XOR x ... n-times = x
 * so we have S XOR x = 0, which means x = S
 * Since S is the XOR of all ai, it is guaranteed to be in the range [0, 2^8) as each ai is in that range.
 * 
 * 
 * Prior Approach: (Brute Force)
 * I tried all possible values of x from 0 to 255,
 * and checked if the condition holds.
 * 
 * It has a time complexity of O(N * 255), 
 * which is not efficient for large N. (say N = 10^6)
 * though it worked here due to small constraints. (N <= 1000)
 */