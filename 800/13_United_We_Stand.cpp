#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; cin >> n;

    int minNum = INF;
    int maxNum = -INF;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];

        maxNum = max(maxNum, a[i]);
        minNum = min(minNum, a[i]);
    }

    if(maxNum == minNum) {
        cout << -1 << endl;
        return;
    }

    vector<int> b, c;
    for(int num : a) {
        if(num == maxNum) {
            c.push_back(num);
        } else {
            b.push_back(num);
        }
    }

    cout << b.size() << " " << c.size() << endl;

    for(int num : b) {
        cout << num << " ";
    }
    cout << endl;

    for(int num : c) {
        cout << num << " ";
    }
    cout << endl;
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
 * Time Complexity: O(N) for each test case
 * Space Complexity: O(2*N) = O(N) for each test case
 * 
 * Explanation:
 * We are required to form 2 arrays 'b' and 'c' from elements of a,
 * such that any element in 'b' is not divisible by any element in 'c'.
 * if any element 'x' is strictly greater than other element 'y',
 * y % x != 0 (always true)
 * so, I put the maximum element in array 'c' and rest in array 'b'.
 * 
 * But if all elements are same, then it's impossible to form such arrays,
 * so we print -1 in that case. (minNum == maxNum is used to check that)
 */