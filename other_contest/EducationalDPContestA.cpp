#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    int n;
    cin >> n;

    vector<ll> h(n);
    rep(i, n) cin >> h[i];

    vector<ll> dp(100010, 1LL << 60);

    dp[0] = 0;

    for (int i = 1; i < n; i++) {
        dp[i] = min(dp[i], dp[i - 1] + abs(h[i - 1] - h[i]));
        if (i < 2) continue;
        dp[i] = min(dp[i], dp[i - 2] + abs(h[i - 2] - h[i]));
    }

    cout << dp[n - 1] << endl;

    return 0;
}
