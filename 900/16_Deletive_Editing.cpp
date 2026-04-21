#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// void solve() {
//     string s, t; cin >> s >> t;

//     vector<int> freq(26, 0);
//     for (char c : t) {
//         freq[c - 'A']++;
//     }

//     vector<bool> remains(s.size(), false);
//     for(int i = 0; i < 26; i++) {
//         int idx = s.size() - 1;
//         while(freq[i] > 0 && idx >= 0) {
//             if(s[idx] - 'A' == i) {
//                 remains[idx] = true;
//                 freq[i]--;
//             }
//             idx--;
//         }
//     }

//     string expected = "";
//     for(int i = 0; i < s.size(); i++) {
//         if(remains[i]) {
//             expected += s[i];
//         }
//     }

//     if(expected == t) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
// }

// A more concise approach using a single pass from the end of the string
void solve() {
    string s, t; 
    cin >> s >> t;

    // 1. Map target frequencies
    vector<int> freq(26, 0);
    for (char c : t) freq[c - 'A']++;

    string result = "";
    
    // 2. Iterate backward through s to pick the "last" occurrences
    // This correctly simulates removing the "first" occurrences in the game.
    for (int i = s.size() - 1; i >= 0; i--) {
        int charIdx = s[i] - 'A';
        if (freq[charIdx] > 0) {
            result += s[i];
            freq[charIdx]--;
        }
    }

    // 3. Since we scanned backward, reverse result to check against t
    reverse(result.begin(), result.end());

    if (result == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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
