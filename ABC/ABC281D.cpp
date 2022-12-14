#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    int n, k, d;
    cin >> n >> k >> d;

    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    vector dp(n + 2, vector(k + 2, vector<ll>(d, -1)));
    dp[0][0][0] = 0;

    rep(i, n) {
        int ni = i + 1;
        rep(j, k + 1) rep(r, d) {
            ll now = dp[i][j][r];
            if (now == -1) continue;

            /* use */
            {
                int nj = j + 1, nr = (r + a[i]) % d;
                dp[ni][nj][nr] = max(dp[ni][nj][nr], now + a[i]);
            }
            /* not use */
            {
                int nj = j, nr = r;
                dp[ni][nj][nr] = max(dp[ni][nj][nr], now);
            }
        }
    }

    cout << dp[n][k][0] << endl;
}
