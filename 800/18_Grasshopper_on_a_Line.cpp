#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

// #define int long long

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

void solve() {
    int x, k; cin >> x >> k;
    
    if(x % k == 0) {
        cout << 2 << endl;
        cout << x - 1 << " " << 1 << endl;
        return;
    }

    cout << 1 << endl;
    cout << x << endl;
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
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 * 
 * Explanation:
 * The grasshopper can jump to any position on the line, such that 
 * the jump length is not divisible by k. If x is not divisible by k, 
 * the grasshopper can jump directly to position x in one jump. 
 * If x is divisible by k, the grasshopper can make two jumps: 
 * first to position x-1 (which is not divisible by k), 
 * and then from x-1 to x (which is a jump of length 1, also not divisible by k).
 */
