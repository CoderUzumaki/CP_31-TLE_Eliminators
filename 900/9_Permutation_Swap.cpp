#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Better Approach: O(n * logn), O(n)
void solve() {
    int n; cin >> n;

    vector<int> permutation(n);
    for(int &p : permutation) cin >> p;

    int k = 0;
    for(int i = 0; i < n; i++) {
        int diff = abs(permutation[i] - (i + 1));

        if(diff > 0) {
            if(k == 0) k = diff;
            else k = __gcd(k, diff);
        }
        
        if(k == 1) break;
    }

    cout << k << endl;
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

//     Time complexity: O(n * sqrt(n)), Space complexity: O(n)
// void solve() {
//     int n; cin >> n;

//     vector<int> permutation(n);
//     for(int &p : permutation) cin >> p;

//     vector<bool> candidateKeys(n, true);
//     for(int i = 0; i < n; i++) {
//         if(permutation[i] == i+1) continue;

//         int diff = abs(permutation[i] - (i + 1));
//         vector<bool> temp(n, false);

//         int cnt = 0;
//         for(int j = 1; j <= sqrt(diff); j++) {
//             if(diff % j == 0) {
//                 if(candidateKeys[j]) {
//                     temp[j] = true;
//                     cnt++;
//                 }
//                 if(candidateKeys[diff/j]) {
//                     temp[diff/j] = true;
//                     cnt++;
//                 }
//             }
//         }
//         if(cnt == 1) {
//             cout << 1 << endl;
//             return;
//         }

//         candidateKeys = temp;
//     }

//     for(int i = n-1; i >= 1; i--) {
//         if(candidateKeys[i]) {
//             cout << i << endl;
//             return;
//         }
//     }
// }
