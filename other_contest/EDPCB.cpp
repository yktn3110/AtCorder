#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    int n, k;
    cin >> n >> k;

    vector<ll> h(n);
    rep(i, n) cin >> h[i];

    vector<ll> dp(100010, 1LL << 60);

    dp[0] = 0;

    for (int i = 1; i < n; i++) {
        rep2(j, k) {
            if (i - j < 0) break;
            dp[i] = min(dp[i], dp[i - j] + abs(h[i - j] - h[i]));
        }
    }

    cout << dp[n - 1] << endl;

    return 0;
}
