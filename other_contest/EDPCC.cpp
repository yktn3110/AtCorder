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

    int a[n], b[n], c[n];
    rep(i, n) cin >> a[i] >> b[i] >> c[i];

    ll dp[n + 5][3];

    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = c[0];

    rep(i, n) {
        if (i == 0) continue;
        dp[i][0] = max(dp[i - 1][1] + a[i], dp[i - 1][2] + a[i]);
        dp[i][1] = max(dp[i - 1][0] + b[i], dp[i - 1][2] + b[i]);
        dp[i][2] = max(dp[i - 1][0] + c[i], dp[i - 1][1] + c[i]);
    }

    cout << max(max(dp[n - 1][0], dp[n - 1][1]), dp[n - 1][2]) << endl;

    return 0;
}
