#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int x0, n;
    cin >> x0 >> n;

    if (n == 0)
    {
        cout << x0 << endl;
        return;
    }

    int sets = (n - 1) / 4;
    int rem = (n - 1) % 4;
    int offset = 0;

    if (rem == 1)
        offset = n;
    else if (rem == 2)
        offset = (2 * n - 1);
    else if (rem == 3)
        offset = (n - 3);

    int tmp = sets * 4 + 1 - offset;
    int ans = (x0 % 2 == 0) ? x0 - tmp : x0 + tmp;
    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}
