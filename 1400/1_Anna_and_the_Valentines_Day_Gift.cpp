#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int countDigits(int num) {
    int digits = 0;
    while(num != 0) {
        digits += 1;
        num /= 10;
    }
    return digits;
}

int countTrailingZeros(int num) {
    int trailingZeros = 0;
    while(num != 0) {
        if(num % 10 == 0) trailingZeros++;
        else break;

        num /= 10;
    }
    return trailingZeros;
}

void solve() {
    int n, m; cin >> n >> m;
    int total_digits = 0;
    vector<int> vec;

    for(int i = 0; i < n; i++) {
        int num; cin >> num;

        total_digits += countDigits(num);
        if(countTrailingZeros(num) > 0) {
            vec.push_back(countTrailingZeros(num));
        }
    }

    sort(vec.begin(), vec.end(), greater<int>());

    for(int i = 0; i < vec.size(); i+=2) {
        total_digits -= vec[i];
    }

    if(total_digits <= m) cout << "Anna" << endl;
    else cout << "Sasha" << endl;
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
