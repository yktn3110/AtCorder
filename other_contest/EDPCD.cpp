#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    int n, w_max;
    cin >> n >> w_max;

    int w[n], v[n];
    rep(i, n) cin >> w[i] >> v[i];

    ll dp[n + 5][w_max + 5] = {};
    rep(i, n) for (int j = 0; j <= w_max; j++) {
        dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
        if (w[i] > j) continue;
        dp[i + 1][j] = max(dp[i + 1][j], dp[i][j - w[i]] + v[i]);
    }

    cout << dp[n][w_max] << endl;

    return 0;
}
