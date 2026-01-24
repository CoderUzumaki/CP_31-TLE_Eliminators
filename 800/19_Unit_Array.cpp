#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

// #define int long long

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    int cntNegOne = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] == -1) {
            cntNegOne++;
        }
    }

    if(cntNegOne % 2 == 0 && cntNegOne <= n/2) {
        cout << 0 << endl;
    } else if (cntNegOne % 2 == 1 && cntNegOne <= n / 2) {
        cout << 1 << endl;
    } else {
        int diff = cntNegOne - n/2;

        if((n / 2) % 2 == 0) {
            cout << diff << endl;
        } else {
            cout << diff + 1 << endl;
        }
    }
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
 * Time Complexity: O(N) per test case.
 * Space Complexity: O(N).
 * 
 * Explanation:
 * The problem says, the array contains only 1 and -1.
 * We need to make the product of all elements equal to 1.
 * and sum of all elements >= 0.
 * To do this, we can do following operations any num of times:
 * 1. Change -1 to 1 (cost 1)
 * 2. Change 1 to -1 (cost 1)
 * We need to minimize the cost.
 * 
 * Since, product has to be 1, we need even number of -1s in the array.
 * Also, for sum to be >= 0, we can have at most n/2 -1s in the array.
 * So, we have following cases:
 * 1. If cnt(-1) is even and cnt(-1) <= n/2, cost = 0 (already satisfied)
 * 2. If cnt(-1) is odd and cnt(-1) <= n/2, 
 *   we can change one -1 to 1, cost = 1
 * 3. If cnt(-1) > n/2,
 *  we need to change (cnt(-1) - n/2) -1s, 
 *  to make sum >= 0.
 *  After that, if n/2 is even, cost = (cnt(-1) - n/2)
 *  else, we need to change one more 1 to -1 to make cnt(-1) even,
 *  so cost = (cnt(-1) - n/2) + 1
 */