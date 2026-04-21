#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// bool divide(vector<int> &arr, int idx, int &ops) {
//     if(idx < 0) return true;

//     while(arr[idx] >= arr[idx+1]) {
//         if(arr[idx] == 0) {
//             return false;
//         }

//         arr[idx] /= 2;
//         ops++;
//     }

//     return divide(arr, idx-1, ops);
// }

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for(int &a : arr) cin >> a;

    int ops = 0;

    // iterative approach
    for(int i = n-2; i >= 0; i--) {
        while(arr[i] >= arr[i+1]) {
            if(arr[i] == 0) {
                cout << -1 << endl;
                return;
            }

            arr[i] /= 2;
            ops++;
        }
    }

    // recursive approach
    // if(!divide(arr, n-2, ops)) {
    //     cout << -1 << endl;
    //     return;
    // }

    cout << ops << endl;
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

// TC: O(n log(max(arr)))
// SC: O(1) -- for iterative approach, O(n) -- for recursive approach (due to recursion stack)