#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;
const long long INF = 1LL << 60;

int main(void) {
    int n;
    ll w_max;
    cin >> n >> w_max;

    ll w[n], v[n];
    rep(i, n) cin >> w[i] >> v[i];

    vector dp(n + 5, vector<ll>(100100, INF));
    dp[0][0] = (ll)0;

    rep(i, n) rep(j, 100100) {
        dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
        if (j < v[i]) continue;
        dp[i + 1][j] = min(dp[i + 1][j], dp[i][j - v[i]] + w[i]);
    }

    ll ans = 0;
    rep(i, 100100) if (dp[n][i] <= w_max) ans = i;

    cout << ans << endl;
    return 0;
}
